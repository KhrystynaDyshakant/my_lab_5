#include "Medicine.h"
#include <iostream>

using namespace std;

void Medicine::print_Medicine() {
	cout << "\n" << to_Str_Obj();
}

void set_Price(float price) { this->price = price; }
void set_Quantity(int quantity) { this->quantity = quantity; }
void set_Name(string name) { this->name = name; }
void set_Is_Prescription_Needed(bool t) { this->isPrescriptionNeeded = t; }
void set_Date(string date) { this->date = date; }
float get_Price() { return price; }
int get_Quantity() { return Medicine::quantity; }
string get_Name() { return name; }
bool get_Is_Prescription_Needed() { return Medicine::is_Prescription_Needed; }
string get_Date() { return Medicine::date; }
};
string Medicine::to_Str_Obj() {
	return "{Name:" + name + "\tQuantity:" + to_string(quantity) + "\tPrice:" + to_string(price) + "\tPrescriptionNeed:" + (isPrescriptionNeeded ? "y" : "n") + "\tDate:" + date + "}";
}
void Medicine::input() {
	cout << "Name:";
	cin >> name;
	cout << "Quantity:";
	cin >> quantity;
	cout << "Price:";
	cin >> price;
	cout << "PrescriptionNeed(y/n):";
	char tmp;
	cin >> tmp;
	(tmp == 'y') ? is_Prescription_Needed = true : is_Prescription_Needed = false;
	cout << "Date(mm/dd/yyyy):";
	cin >> date;
}