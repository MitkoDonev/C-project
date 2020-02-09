#pragma once
#include <string>
using namespace std;

class Date
{
public:
	class Friend {
	private:
		string firstName;
		string secondName;
		string lastName;
		int birthday;
		int birthMonth;
		int birthYear;

	public:
		Friend(string first, string second, string last, int day, int month, int year) {
			firstName = first;
			secondName = second;
			lastName = last;
			birthday = day;
			birthMonth = month;
			birthYear = year;
		}
		string getFirstName() {
			return firstName;
		}
		string getSecondName() {
			return secondName;
		}
		string getLastName() {
			return lastName;
		}
		int getBirthday() {
			return birthday;
		}
		int getBirthMonth() {
			return birthMonth;
		}
		int getBirthYear() {
			return birthYear;
		}

		bool nameContains(string str) {
			if ((firstName.find(str) != string::npos) || (lastName.find(str) != string::npos))
			{
				return true;
			}
			return false; 
		}

		bool compareDate(int year, int month, int day)
		{
			if (year != birthYear)
			{
				return false;
			}

			if (month!= birthMonth)
			{
				return false;
			}

			if (day != birthday)
			{
				return false;
			}

			return true;
		}

	};
};

