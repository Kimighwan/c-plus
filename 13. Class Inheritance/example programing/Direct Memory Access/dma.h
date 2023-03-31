#ifndef DMA_H
#define DMA_H
#pragma warning(disable:4996)
#include <iostream>
class baseDMA {
private:
	char* label;
	int rating;
public:
	baseDMA(const char* l = "null", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

//DMA(Direct Memory Access)를 사용하지 않는 클래스
class lacksDMA : public baseDMA {
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& ls);
};

//DMA를 사용하는 클래스
class hasDMA : public baseDMA {
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	hasDMA& operator=(const hasDMA& hs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& hs);
};
#endif
