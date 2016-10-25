////
// Silvia Moreno
// CS-172
// HW 11.3 Increase in Array Size
// 10/23/16
////
#include <iostream>

using namespace std;
int* doubleCapacity(const int* list, int size) {
	int* p = new int[size]; //assigned point to a new int 

	for (int i = 0, j = size*2; i < size; i++)
	{ // the for loop doubles the size of the array
		// it is equal to the list, so it does it to the list
		p[j] = list[i];
		return p; //returns the pointer
		
	}

}
void printarray(const int* list, int size) { //using the same parameter
	for (int i = 0; i < size; i++) {
		cout << list[i] << endl;
	}//prints out the array list
}
	int main() {
		int list[] = { 2,4,10,15 }; //array of the list
		int *t = doubleCapacity(list, 4); //calls the doubling function
		printarray(t, 4);

		delete t; //deletes the pointer
		return 0;
	}