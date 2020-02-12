#include <iostream>
#include <string>
#include "Date.h"
#include "Friend.h"
using namespace std;

Friend compareFriends(Friend fr, Friend secondFr);

int main()
{
	string str;
	cout << "Enter string: " << endl;
	cin >> str;

	Friend fr("Az", "Yordanov", "Plamenov", 15, 12, 1990);

	cout << "Do first and last name contain the given string: " << fr.nameContains(str) << endl;

	int day, month, year;

	cout << "Enter day: " << endl;
	cin >> day;
	cout << "Enter month: " << endl;
	cin >> month;
	cout << "Enter year: " << endl;
	cin >> year;

	int friendDay, firendMonth, freidnYear;

	cout << "Enter the friends birthday: " << endl;
	cin >> friendDay;
	cout << "Enter the friends  month: " << endl;
	cin >> firendMonth;
	cout << "Enter the friends  year: " << endl;
	cin >> freidnYear;

	Friend secondFr("Stefcho", "Ivanov", "Asparuhov", friendDay, firendMonth, freidnYear);

	cout << "Is the date equal to the birthdate: " << fr.isOlderThan(secondFr) << endl;

	Friend older = compareFriends(fr, secondFr);

	return 0;
}

Friend compareFriends (Friend fr, Friend secondFr)
{
	if (fr.getBirthYear() <= secondFr.getBirthYear())
	{
		return secondFr;
	}

	if (fr.getBirthMonth() <= secondFr.getBirthMonth())
	{
		return secondFr;
	}

	if (fr.getBirthday() <= secondFr.getBirthday())
	{
		return secondFr;
	}

	return fr;
}