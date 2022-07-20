/*
Author: Abigail Miller

Challenge:
Write a program that asks the user to enter integers to be stored in the variables 'a' and 'b'. 
Then create two integer pointers named ptrA and ptrB.
Assign the values of 'a' and 'b' to ptrA and ptrB, and display them.
Take an input variable and display the same value by pointer.
*/

#include <iostream>

void main() {
	int a;
	int b;
	int* ptrA;
	int* ptrB;

	std::cout << "Please enter an integer\n";
	std::cin >> a;
	std::cout << "\nEnter a second integer\n";
	std::cin >> b;

	ptrA = &a;
	ptrB = &b;

	std::cout << "\nThe pointer values of the two numbers are:\n";
	std::cout << *ptrA << "\n";
	std::cout << *ptrB << "\n";

	std::cout << "END";
}