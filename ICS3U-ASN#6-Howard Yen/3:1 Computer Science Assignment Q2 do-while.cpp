/* 3/1 Computer Science Assignment Q2 do-while
Howard Yen
March 1,2018
Write a program that find the product of the numbers entered.  You do not know how many numbers will be entered ahead of time.*/

#include <iostream> //include header iostream
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	double a;
	double product = 1;

	do {
		cout << "Please enter a number.\n"; //ask the user to enter a number
		cin >> a;
		if (a!=999) {
			product *= a; //product equals to a*product if a is not equals to 999
		}
	} while (a!=999); //re-do the program if a is not equals to 999
	cout << "The product of the numbers is " << product << ".\n"; //output the product of the numbers
	return(0); //end of the program
}