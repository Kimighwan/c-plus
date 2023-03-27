#ifndef TABTENN0_H
#define TABTENN0_H
#include <string>	
using namespace std;
class TableTennisPlayer {
private:
	string firstname;
	string lastname;
	bool haveTable;
public:
	TableTennisPlayer(const string & fn="none", const string& ln="none", bool hv = false);
	void Name() const;
	bool HaveTable() const { return haveTable; }
	void ResetTable(bool h) { haveTable = h; }
};
#endif
