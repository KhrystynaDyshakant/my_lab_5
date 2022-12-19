#include "Pharmacy.h"
#include <iostream>

using namespace std;

Pharmacy::Pharmacy(int n) {
	for (int i = 0; i < n; i++) {
		Medicine* tmp = new Medicine();
		l.push_back(*tmp);
	}
}
void Pharmacy::discount() {
	for (int i = 0; i < l.size(); i++) {
		float tmp = l[i].getPrice();
		l[i].setPrice(tmp - tmp / 10);
	}
}
void Pharmacy::check(string date) {
	int i = 0;
	while (true) {
		bool to_delete = false;
		string thisDate = l[i].getDate();
		int* thisDays, * nowDays;
		thisDays = convert(thisDate);
		nowDays = convert(date);
		if (nowDays[2] > thisDays[2]) {
			to_delete = true;
		}
		else if (nowDays[2] == thisDays[2]) {
			if (nowDays[0] > thisDays[0]) {
				to_delete = true;
			}
			else if (nowDays[0] == thisDays[0]) {
				if (nowDays[1] > thisDays[1]) {
					to_delete = true;
				}
			}
		}

		if (to_delete)
			l.erase(l.begin() + i);
		else
			i++;
		if (i >= l.size())
			break;
	}
}
int* Pharmacy::convert(string date) {
	int* res = new int[3];
	*res = int(date[0] - '0') * 10 + int(date[1] - '0');
	*(res + 1) = int(date[3] - '0') * 10 + int(date[4] - '0');
	*(res + 2) = int(date[6] - '0') * 1000 + int(date[7] - '0') * 100 + int(date[8] - '0') * 10 + int(date[9] - '0');
	return res;
}
void Pharmacy::print() {
	cout << "\nPharmacy:";
	for (int i = 0; i < l.size(); i++) {
		l[i].printMedicine();
	}
}
void Pharmacy::printCheapiest() {
	if (l.size() == 0) {
		cout << "\nEmpty Pharmacy";
		return;
	}
	Medicine tmp = l[0];
	for (int i = 0; i < l.size(); i++) {
		if (tmp.getPrice() > l[i].getPrice())
			tmp = l[i];
	}
	cout << "\nCheapiest:";
	tmp.printMedicine();
}
void Pharmacy::add() {
	Medicine* tmp = new Medicine();
	l.push_back(*tmp);
}
void Pharmacy::deleteEl(int i) {
	l.erase(l.begin() + i);
}