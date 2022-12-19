#pragma once
#include "Medicine.h"
#include <vector>

using namespace std;

class Pharmacy
{
private:
	vector<Medicine> l;
	int* convert(string date);
public:
	Pharmacy(int n);
	void discount();
	void check_date(string date);
	void print();
	void printCheapiest();
	void add();
	void deleteEl(int i);
};