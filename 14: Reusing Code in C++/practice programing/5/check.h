#ifndef EMP_H
#define EMP_H
#include <iostream>                                                                //   const string& fn, const string& ln, const string& j
#include <string>
using std::string;

class abstr_emp {
private:
	string fname;
	string lname;
	string job;
public:
	abstr_emp();
	abstr_emp(const string& fn, const string& ln, const string& j);
	virtual void ShowAll() const; 
	virtual void SetAll();
	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);
	virtual ~abstr_emp() = 0; // 가상 기초 클래스
};

class employee : public abstr_emp {
public:
	employee();
	employee(const string& fn, const string& ln, const string& j);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class manager : virtual public abstr_emp {
private:
	int inchargeof; // 관리하는 abstr_emp 수
protected:
	int InChargeOf() const { return inchargeof; } //출력
	int& InChargeOf() { return inchargeof; } //입력
public:
	manager();
	manager(const string& fn, const string& ln, const string& j, int ico = 0) : abstr_emp(fn, ln, j), inchargeof(ico) { }
	manager(const abstr_emp& e, int ico) : abstr_emp(e), inchargeof(ico) { }
	manager(const manager& m);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class fink : virtual public abstr_emp {
private:
	string reportsto; //fink가 보고하는 대상
protected:
	const string ReportTo() const { return reportsto; }
	string& ReportTo() {return reportsto;}
public:
	fink();
	fink(const string& fn, const string& ln, const string& j, const string& rpo) : abstr_emp(fn,ln,j), reportsto(rpo) { }
	fink(const abstr_emp& e, const string & rpo) : abstr_emp(e), reportsto(rpo) { }
	fink(const fink& f);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class highfink : public manager, public fink {
public:
	highfink();
	highfink(const string& fn, const string& ln, const string& j, const string & rpo, int ico) : abstr_emp(fn,ln,j), fink(fn, ln, j, rpo), manager(fn, ln, j, ico) { }
	highfink(const abstr_emp& e, const string & rpo, int ico) : abstr_emp(e), fink(e, rpo), manager(e, ico) { }
	highfink(const fink& f, int ico) : abstr_emp(), fink(f), manager(ico) { }
};
#endif 
