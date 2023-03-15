#ifndef PLORG_H
#define PLORG_H
#include <string>
class Plorg
{
private:
	char pl_name[20];
	int ci_index;
public:
	Plorg(const char * name = "Plorga",  int index = 50);
	void show() const;
	void changeCI(int index);
};
#endif
