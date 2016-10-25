////
// Silvia Moreno
// CS-172-2
// HW 11.1 Analyze input
// 10/20/16
////

#include <iostream>
using namespace std;
int main() {

	int n;
	int *val = &n;
	*val = 5; //pointer is declared to be 5
	cout << *val << " The Size is: " << &val << endl;
	//outputs the size of the pointer
	int sum = 0;
	for (int i = 1; i <= *val; i++)
	{//gets the summations for the numbers that come before 5
		sum += i; 
	}
	int average = sum / 5; //average equation
	cout << "The average is: " << average << endl;
	if (*val > average) 	
	{//if it is greater than average, it will output if it is greater

		cout << *val << " is greater than average." << endl;
	}
	else
		cout << *val << " is less than average." << endl;

	return 0;
}