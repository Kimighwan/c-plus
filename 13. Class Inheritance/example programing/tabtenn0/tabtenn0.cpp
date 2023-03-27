#include <iostream>
#include "tabtenn0.h"
TableTennisPlayer::TableTennisPlayer(const string& fn , const string& ln , bool hv) : firstname(fn), lastname(ln), haveTable(hv) {}

void TableTennisPlayer::Name() const {
	cout << lastname << ", " << firstname << endl;
}
