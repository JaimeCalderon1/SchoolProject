#include <iostream>
#include <string>
#include "Header.h" // clear() function
using namespace std;

int main()
{
	cout << "Jaime Calderon\t" << "L1-1\t" << "L1-1.exe" << endl; // step E
	int SECRET = 13;
	double rate = 12.50;
	int num1, num2, newNum;
	string name;
	double hoursWorked, wages;
	
	cout << "Enter two integers." << endl; // step F
	cin >> num1 >> num2;
	clear();
	cout << num1 << " is the first value. " << num2 << " is the second value." << endl;
	clear();
	newNum = (num1 * 2) + num2;	// step H
	newNum = newNum + SECRET; // step i
	cout << newNum << " is the new number." << endl;
	Sleep(2000);
	clear();


	cout << "Enter a person's last name." << endl;
	cin >> name; // step j . store a last name into variable 
	Sleep(1000);
	clear();
	cout << "Enter hours worked (0.00 to 100.00 decimal format)" << endl;
	cin >> hoursWorked; // step K. store hours work into variable
	Sleep(1000);
	clear();

	wages = hoursWorked*rate;
	
	cout << "Name: " << name << endl; 
	cout << "Pay Rate: $" << rate << endl;
	cout << "Hours worked: " << hoursWorked << endl;
	
	cout << "Salary: $" << wages << endl;

	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);

}