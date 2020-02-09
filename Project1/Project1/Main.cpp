#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

double readNumber();
string compare(Vehicle vehicle, double number);
void printDifference(Vehicle v, double discount);


int main()
{
	Vehicle bmw("BMW", "black", 5000, 25567.98);

	double x = readNumber();

	printDifference(bmw, x);

	cout << compare(bmw, x) << endl;


	return 0;
}

void printDifference(Vehicle v, double discount) {
	 cout << "The price of the " << v.getBrand() << " is " << v.getPrice() << " and the discount is " << 
		 v.getPrice() - discount << endl;
}

string compare(Vehicle vehicle, double number)
{
	if (vehicle.getEngineSize() > number) {
		return "Engine size is bigger!";
	}
	else if (vehicle.getEngineSize() < number)
	{
		return "Engine size is smaller!";
	}
	else {
		return "Engine size is equal!";
	}
}

double readNumber()
{
	double x;
	cout << "Enter number: " << endl;
	cin >> x;
	return x;
}

