/* 3/1 Computer Science Assignment Q1 do-while
Howard Yen
March 1, 2018
Write a program that calculates the sum of 5 numbers between 1 and 50.*/

#include <iostream> //include header iostream
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	double a;
	double sum = 0;
	double counter = 0;

	do {
		do {
			cout << "Please enter a number.\n"; //ask the user to enter a number
			cin >> a;
		} while (a<1 || a>50); //re-do this program if a is less than one or more than fifty

		sum+=a; //sum = sum+a
		counter++; 
	} while (counter <5); //re-do this program until it runs five times
	cout << "the sum of these five numbers is " << sum << ".\n"; //output the sim of these five numbers
	return(0); //end of the program
}