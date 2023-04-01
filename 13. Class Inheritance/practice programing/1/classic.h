#ifndef CLASSIC_H
#define CLASSIC_H
class Cd {                   //cd 디스크
private:
	char performers[50];
	char label[20];
	int selections; //수록 곡 수
	double playtime; // 분 단위의 연주 시간
public:
	Cd(const char* s1 ="none",const char* s2="none", int n=0, double x=0.0);
	Cd(const Cd& d);
	virtual ~Cd(); 
	virtual void Report() const; // Cd의 모든 데이터를 보고
	Cd& operator=(const Cd& d);
};

class Classic : public Cd {
private:
	char title[50];
public:
	Classic(const char* t = "none", const char* s1 = "none", const char* s2 = "none", int n = 0, double x = 0.0);
	Classic(char* t, Cd& d);
	virtual ~Classic();
	virtual void Report() const;
	Cd& operator=(const Classic& cc);
};
#endif
