////
// Silvia Moreno
// CS-172
// HW 11.9 "Geometry: The Rectangle 2D Class"
// 10/23/16
////
#include <iostream>
#include <cmath>
using namespace std;

class Rectangle2D {
private:
	double X;
	double Y;
	double Width;
	double Heigth;
public:
	Rectangle2D() {
		// The default Rectangle
		X = 0;
		Y = 0;
		Width = 1;
		Heigth = 1;
	}
	Rectangle2D(double X, double Y, double Width, double Heigth) {
		this->X = X; //pointer this to call X to equal X
		this->Y = Y;
		this->Width = Width;
		this->Heigth = Heigth;
	}
	double getX() const {
		return X; // to get X  from private you have to return X
	}
	void setX(double X) const {
		this->X;
	}
	double getY() const {
		return Y;
	}
	void setY(double Y) const {
		this->Y; //use pointer this to use private variable Y
	}
	double getWidth() const{
		return Width;
	}
	void setWidth() const{
		this->Width;
	}
	double getHeigth() const {
		return Heigth;
	}
	void setHeight() const{
		this->Heigth;
	}

	double getArea() const{
		return Width*Heigth; 
		//returns the area equation for the rectangle
	}
	double getPerimeter() const {
		//returns the premiter equation of the rectangle
		return (2*Width) +(2*Heigth);
	}
	bool contains(double x, double y) const{
		return (abs(x - this->X) <= Width && Heigth) && (abs(y - this->Y) <= Width && Heigth);
	}// calculates x and y 
	bool contains(const Rectangle2D &r) const{
		return contains(r.X - r.Width, r.Y) && contains(r.X + r.Width, r.Y) && contains(r.X - r.Heigth, r.Y) && contains(r.X + r.Heigth, r.Y)
			&& contains(r.Y - r.Width, r.X) && contains(r.Y + r.Width, r.X) && contains(r.Y - r.Heigth, r.X) && contains(r.Y + r.Heigth, r.X);
	} //x and y are subtracted and added from width and heigth to find what it contains
	bool overlaps(const Rectangle2D &r) const {
		return true; //returns true
	}

};
int main() {
	Rectangle2D R1(2, 4, 10, 15); 
	//calls the class rectangle with the given dimmensions
	cout << "The area is: " << R1.getArea() << endl; 
	//outputs the area of the given rectangle
	cout << "The Perimeter is: " << R1.getPerimeter() << endl;
	//outputs the perimeter of the given rectangle
	
	cout << R1.contains(5,10) << endl; //uses the variables that are assigned to it
	cout << R1.overlaps(R1) << endl;
	return 0;
}