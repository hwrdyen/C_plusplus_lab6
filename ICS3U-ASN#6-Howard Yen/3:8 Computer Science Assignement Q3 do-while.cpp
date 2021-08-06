/* 3/8 Computer Science Assignment Q3 do-while
Howard Yen
March 8, 2018
Write a program that asks the user if they want to calculate the square (press 1), cube (press 2), or square root (press 3) of any number they enter.  The program should continue to ask the user if they want to calculate with a different number until the user enters 999. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = 0;
	double b;
	double product = 1;

	do {
		do {
				cout << "Please press 1 if you want to calculate the square, press 2 if you want to calculate the cube ,press 3 if you want to calculate the square root and press 999 if you want to quit the program.\n"; //ask the user to type in 1 or 2 or 3 or 999
				cin >> a;
		} while (a!=1 && a!=2 && a!=3 && a!=999); //re-do the program if a is not equals to 1, 2, 3 and 999

	if (a==999){
			break;
		} //if a equals to 999 then end the program

		if (a==1) {
			cout << "Please enter a number.\n"; //ask the user to enter a number
			cin >>b;
			product = pow(b,2);
			cout << "The square of " << b << " is " << product << ".\n"; //output the square of the number the user typed in
		}
		else if (a==2) {
			cout << "Please enter a number.\n"; //ask the user to enter a number
			cin >> b;
			product = pow (b,2);
			cout << "The cube of " << b << " is " << product << ".\n"; //output the cube of the number the user typed in
		}
		else {
			cout << "Please enter a number.\n"; //ask the user to enter a number
			cin >> b;
			product = sqrt(b);
			cout << "The square root of " << b << " is " << product << ".\n"; //output the square root of the number the user typed in
		}
	} while (a!=999); //re-do the program if a is not equals to 999
	return(0); //end of the program
}
