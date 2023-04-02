#ifndef DMA_H
#define DMA_H
#pragma warning(disable:4996)
#include <iostream>
class dmaABC { //추상화 기초 클래스
private:
	char* label;
	int rating;
public:
	dmaABC(const char* l = "null", int n = 0);
	dmaABC(const dmaABC& da);
	virtual ~dmaABC();
	virtual void View() const = 0;
	virtual dmaABC& operator=(const dmaABC& da);
	friend std::ostream& operator<<(std::ostream& os, const dmaABC& da);
};

class baseDMA : public dmaABC
{ //DM을 사용하는 파생 클래스
public:
	baseDMA(const char* l = "null", int r = 0);
	baseDMA(const baseDMA& bd);
	virtual ~baseDMA() {}
	virtual void View() const;
	virtual baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);
};

//DMA(Direct Memory Access)를 사용하지 않는 클래스
//그렇기에 파괴자 필요없다
//암시적 복사 생성자, 암시적 대입 연산자를 사용한다.
class lacksDMA : public dmaABC 
{
private:
	char color[40];
public:
	lacksDMA(const char* c = "blank", const char* l = "null", int r = 0);
	lacksDMA(const char* c, const dmaABC& da);
	lacksDMA(const lacksDMA& ld);
	virtual ~lacksDMA() {}
	virtual void View() const;
	virtual lacksDMA& operator=(const lacksDMA& ld);
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& ls);
};

//DMA를 사용하는 클래스
class hasDMA : public dmaABC 
{
private:
	char* style;  //생성자에서 new를 사용한다
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const dmaABC& rs);
	hasDMA(const hasDMA& hs);
	virtual ~hasDMA();
	virtual void View() const;
	virtual hasDMA& operator=(const hasDMA& hs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& hs);
};
#endif
