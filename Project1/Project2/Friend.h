#pragma once
#include <string>
#include "Date.h"
using namespace std;

class Friend: public Date
{
private:
	string firstName;
	string secondName;
	string lastName;
public:
	Friend(string first, string second, string last, int day, int month, int year): Date(day, month, year) {
		this->firstName = first;
		this->secondName = second;
		this->lastName = last;
	}
	void setFirstName(string firstName) {
		this->firstName = firstName;
	}
	string getFirstName() {
		return firstName;
	}
	void setSecondName(string secondName) {
		this->secondName = secondName;
	}
	string getSecondName() {
		return secondName;
	}
	void setLastName(string lastName) {
		this->lastName = lastName;
	}
	string getLastName() {
		return lastName;
	}

	bool nameContains(string str) {
		if ((firstName.find(str) != string::npos) || (lastName.find(str) != string::npos))
		{
			return true;
		}
		return false;
	}

	bool isOlderThan(Friend fr) {
		return this->isAfterThan(fr);
	}
};
