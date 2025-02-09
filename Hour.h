#pragma once
#include <sstream>

using namespace std;
class Hour {
private:
	int hours;
	int minutes;
public:
	Hour();
	Hour(int, int);
	~Hour();
	int getMinutes();
	int getHours();
	void setMinutes(int);
	void setHours(int);
	string toString();
};