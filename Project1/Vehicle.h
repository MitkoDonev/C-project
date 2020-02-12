#pragma once 
#include <iostream>
#include <string>

using namespace std;

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



	void setBrand(string brand) {
		this->brand = brand;
	}
	string getBrand() {
		return brand;
	}

	void setColor(string color) {
		this->color = color;
	}
	string getColor() {
		return color;
	}

	int setEngineSize(int engineSize) {
		this->engineSize = engineSize;
	}
	int getEngineSize() {
		return engineSize;
	}

	double setPrice(double price) {
		this->price = price;
	}
	double getPrice() {
		return price;
	}

	double getDiscount(double sum) {
		return this->price - sum;
	}

	double calculateDiscount(double currentprice) {
		return this->price - currentprice;
	}

	int compareToEngineSize(int number)
	{
		if (this->engineSize > number) {
			return -1;
		} 
		if (this->engineSize < number){
			return 1;
		}
		return 0;
	}

};
