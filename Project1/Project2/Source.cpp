#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

bool compareDateBetweenFriends(Date::Friend fr, Date::Friend secondFr);

int main()
{
	string str;
	cout << "Enter string: " << endl;
	cin >> str;

	Date::Friend fr("Racho", "Yordanov", "Plamenov", 15, 02, 1995);

	cout << "Do first and last name contain the given string: " << fr.nameContains(str) << endl;

	int day, month, year;

	cout << "Enter day: " << endl;
	cin >> day;
	cout << "Enter month: " << endl;
	cin >> month;
	cout << "Enter year: " << endl;
	cin >> year;

	cout << "Is the date equal to the birthdate: " << fr.compareDate(year, month, day) << endl;

	int friendDay, firendMonth, freidnYear;

	cout << "Enter the friends birthday: " << endl;
	cin >> friendDay;
	cout << "Enter the friends  month: " << endl;
	cin >> firendMonth;
	cout << "Enter the friends  year: " << endl;
	cin >> freidnYear;

	Date::Friend secondFr("Stefcho", "Ivanov", "Asparuhov", friendDay, firendMonth, freidnYear);

	cout << "The birthdates between both objects are " << compareDateBetweenFriends(fr, secondFr) << endl;

	return 0;
}

bool compareDateBetweenFriends (Date::Friend fr, Date::Friend secondFr)
{
	if (fr.getBirthYear() != secondFr.getBirthYear())
	{
		return false;
	}

	if (fr.getBirthMonth() != secondFr.getBirthMonth())
	{
		return false;
	}

	if (fr.getBirthday() != secondFr.getBirthday())
	{
		return false;
	}

	return true;
}