#include "Vehicle.h"


class Vehicle
{
private:
	string brand;
	string color;
	int engineSize;
	double price;
public:
	Vehicle(string br, string cl, int eng, double pr)
	{
		brand = br;
		color = cl;
		engineSize = eng;
		price = pr;
	}
	string getBrand() {
		return brand;
	}

	string getColor() {
		return color;
	}
	int getEngineSize() {
		return engineSize;
	}

	double getPrice() {
		return price;
	}

	double getDiscount(double sum) {
		return price - sum;
	}

};