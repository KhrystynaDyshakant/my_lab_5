#pragma once
#include <string>

using namespace std;

class Medicine
{
private:
	float price;
	int quantity;
	string name;
	bool is_Prescription_Needed;
	string date;
public:
	Medicine() {
		input();
	}
	Medicine(float price, int quantity, string name, bool t, string date) {
		set_Price(price);
		set_Quantity(quantity);
		set_Name(name);
		set_Is_Prescription_Needed(t);
		set_Date(date);
	};
	void input();
	void print_Medicine();
	string to_Str_Obj();
};