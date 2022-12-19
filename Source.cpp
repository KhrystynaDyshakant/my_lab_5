#include "Pharmacy.h"
#include <iostream>

using namespace std;

int main()
{
    Pharmacy x_medicine(2);
    x_medicine.add();
    x_medicine.print();
    x_medicine.discount();
    x_medicine.print();
    x_medicine.printCheapiest();
    string d;
    cout << "\nCurrent date(mm/dd/yyyy):";
    cin >> d;
    x_medicine.check(d);
    x_medicine.print();
    return 0;
}
