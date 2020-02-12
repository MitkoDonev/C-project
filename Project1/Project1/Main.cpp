#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

double readPriceNumber();
int readEngineSizeNumber();
void printDifference(Vehicle vahicle, double discount);
void printComparedResult(int result);

int main()
{
	Vehicle bmw("BMW", "black", 5000, 25567.00);

	printDifference(bmw, readPriceNumber());

	printComparedResult(bmw.compareToEngineSize(readEngineSizeNumber()));

	return 0;
}

double readPriceNumber()
{
	double num = 0;
	cout << "Enter price: ";
	while (!(cin >> num))
	{
		cout << "ERROR: A number must be entered: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	cout << "Entered price is: " << num << endl;

	return num;
}

int readEngineSizeNumber()
{
	int num;
	cout << "Enter engine size: ";
	while (!(cin >> num))
	{
		cout << "ERROR: A number must be entered: ";
		cin.clear();
		cin.ignore(123, '\n');
	}

	cout << "Entered engine size is: " << num << endl;

	return num;
}


void printDifference(Vehicle vahicle, double discount) {
	cout << "The price of the " << vahicle.getBrand() << " is " << vahicle.getPrice() << " and the discount is " <<
		vahicle.calculateDiscount(discount) << "\n" << endl;
}

void printComparedResult(int result)
{
	if (result == -1) {
		cout << "Engine size is bigger than the entered number!" << "\n" << endl;
	}
	else if (result == 1){
		cout << "Engine size is smaller than the entered number!" << "\n" << endl;
	}
	else {
		cout << "Engine size is equal to the entered number!" << "\n" << endl;
	}
}

