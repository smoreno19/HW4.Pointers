////
// SIlvia Moreno
// CS-172
// HW: 11.13 "The Course Class"
// 10/25/16
////
#include <iostream>
#include <string>
using namespace std;

class Course {
public: //public variables that can be used throughout course
	string courseName;
	string* students;
	int numStudents;
	int capacity;

	Course(const string& courseName, int capacity) { //constructor
		numStudents = 0;
		this->courseName = courseName;
		this->capacity = capacity;
		students = new string[capacity];
	}
	void addStudent(const string& name) {
		students[numStudents] = name;
		numStudents++; //gets the number of students and add to it as they get added to the class
	}
	void dropStudent(const string&name) {
		students[numStudents] = name;
		numStudents--; //same as add student function but it subtracts the student away from the course.
	}
	void clear() {
		delete students; //it deletes the students from the class
	}
	string* getStudents() const {
		return students; //returns the students
	}
	int getNumofStudents() const {
		return numStudents; //returns the number of students in the class
}
};
int main() {
	Course c1("Calulus I", 10); //class name and capacitu=y for the class
	Course c2(c1); //copy constructor for course 1
	c1.addStudent("Sarah Johnson"); //adds three students
	c1.addStudent("Jack Robinson");
	c1.addStudent("Sandra Williams");


	c1.dropStudent("Sandra Williams"); //but drops the last student
	cout << "The class roster is " << c1.getNumofStudents() << endl; //displays the class roster, number and names
	cout << "The class roster is " << c2.getNumofStudents() << endl;
	string * students = c1.getStudents();
	for (int i = 0; i < c1.getNumofStudents(); i++) {
		cout << students[i] << " " << endl; //gets the names of the students
	}



}
int* doubleCapacity(const int* list, int size) {
	int* p = new int[size]; //assigned point to a new int 

	for (int i = 0, j = size * 2; i < size; i++)
	{ // the for loop doubles the size of the array
	  // it is equal to the list, so it does it to the list
		p[j] = list[i];
		return p; //returns the pointer

	}
}