#ifndef STOCK10_H_
#define STOCK10_H_
#pragma warning(disable:4996)
class Stock {
private:
	char * company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const char* co, long n = 0, double pr = 0.0);
	Stock(const Stock& st);
	~Stock() { delete[] company; }
	Stock operator=(const Stock& st);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	const Stock& topval(const Stock& s) const;
	friend std::ostream& operator<<(std::ostream& os, const Stock& st);
};
#endif
