/*
Project Goal: User will enter its age and if its age bigger than 18 or equal, we will write "You can get driving licence"
if not we will write "You can not get driving licence" on the screen.

Coder: Barış Someroğlu

Date: 03.11.2023
*/


#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish"); // write this because ? wanna learn this comment :)
	 // I will identify user's age as Age :)
	int Age;

	//Now let's get age data from user
	cout << "Please Enter Your Age: ";
	cin >> Age;

	// Now let's look condition status
	if (Age >= 18)
	{
		cout << "You can get driving licence"<< endl;
	}
	else { cout << "You can not get driving licence" << endl; }


	return 0;
}
