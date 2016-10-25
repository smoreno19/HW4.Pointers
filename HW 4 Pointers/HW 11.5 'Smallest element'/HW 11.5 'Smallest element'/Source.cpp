////
// Silvia Moreno
// CS-172
// HW 11.5 "Find the Smallest Element"
// 10/23/16
////
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	//assigned double because there is a negative number
	double num[8] = { 1,2,4,5,10,100,2,-22 }; 
	//array of numbers that is being tested
	double* min = min_element(num, num + 8);
	//uses the min_element to find the smallest number from the array
	cout << "The smallest value is: " << *min << endl;
	//outputs the pointer that is smaller than the rest
}