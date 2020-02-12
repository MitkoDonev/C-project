#pragma once
#include <string>
using namespace std;

class Date
{
private:
	int birthday;
	int birthMonth;
	int birthYear;

public:
	Date(int day, int month, int year) {
		this->birthday = day;
		this->birthMonth = month;
		this->birthYear = year;
	}
	void setBirthDay(int birthday) {
		this->birthday = birthday;
	}
	int getBirthday() {
		return birthday;
	}
	void setBirthMonth(int birthMonth) {
		this->birthMonth = birthMonth;
	}
	int getBirthMonth() {
		return birthMonth;
	}
	void setBirthYear(int birthYear) {
		this->birthYear = birthYear;
	}
	int getBirthYear() {
		return birthYear;
	}

	bool isAfterThan(Date date)
	{
		if (this->birthYear <= date.getBirthYear())
		{
			return false;
		}

		if (this->birthMonth <= date.getBirthMonth())
		{
			return false;
		}

		if (this->birthday <= date.getBirthday())
		{
			return false;
		}

		return true;
	}

};

