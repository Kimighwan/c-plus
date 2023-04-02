#include "dmaabc.h"
#include <cstring>
using namespace std;
dmaABC::dmaABC(const char* l, int n) {
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = n;
}

dmaABC::dmaABC(const dmaABC& da) {
	label = new char[strlen(da.label) + 1];
	strcpy(label, da.label);
	rating = da.rating;
}

dmaABC::~dmaABC() {
	delete[] label;
}

void dmaABC::View() const {
	cout << "상표: " << label << endl;
	cout << "등급: " << rating << endl;
}

dmaABC& dmaABC::operator=(const dmaABC& da) {
	if (this == &da)
		return *this;
	delete[] label;
	label = new char[strlen(da.label) + 1];
	strcpy(label, da.label);
	rating = da.rating;
	return *this;
}

ostream& operator<<(ostream& os, const dmaABC& da) {
	os << "상표: " << da.label << endl;
	os << "등급: " << da.rating << endl;
	return os;
}

baseDMA::baseDMA(const char* l, int r) : dmaABC(l , r) {}

baseDMA::baseDMA(const baseDMA& bd) : dmaABC(bd) {}

void baseDMA::View() const {
	dmaABC::View();
}

baseDMA& baseDMA::operator=(const baseDMA& bd) {
	if (this == &bd)
		return *this;
	dmaABC::operator=(bd);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const baseDMA& bd) {
	os << (const dmaABC&)bd << endl;
	return os;
}
	

lacksDMA::lacksDMA(const char* c, const char* l, int r)
	:dmaABC(l, r) {
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const dmaABC& da) 
	: dmaABC(da) {
	strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const lacksDMA& ld) : dmaABC(ld) {
	strcpy(color, ld.color);
}

void lacksDMA::View() const {
	dmaABC::View();
	cout << "색상: " << color << endl;
}

lacksDMA& lacksDMA::operator=(const lacksDMA& ld) {
	if (this == &ld)
		return *this;
	dmaABC::operator=(ld);
	strcpy(color, ld.color);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ld) {
	os << (const dmaABC&)ld;
	os << "색상: " << ld.color << std::endl;
	return os;
}

hasDMA::hasDMA(const char* s, const char* l, int r) : dmaABC(l, r) {
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char* s, const dmaABC& da) : dmaABC(da) {
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& hs) : dmaABC(hs) {
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
	delete[] style;
}

void hasDMA::View() const {
	dmaABC::View();
	cout << "스타일: " << style << endl;
}

hasDMA& hasDMA::operator=(const hasDMA& hs) {
	if (this == &hs)
		return *this;
	dmaABC::operator=(hs);
	delete[] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs) {
	os << (const dmaABC&)hs;
	os << "스타일: " << hs.style << std::endl;
	return os;
}
