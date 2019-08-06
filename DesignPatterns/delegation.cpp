#include <iostream>
using namespace std; 

class Shape
{
public:
	virtual double area() = 0;
};

class Rectangle : public Shape
{
private:
	double height, width;
public:
	Rectangle(double h, double w) {
		height = h;
		width = w;
	}
	double area() {
		return height*width;
	}
};

class Circle : public Shape
{
private:
	double radius;
public:
	Circle(double r) {
		radius = r;
	}
	double area() {
		return 3.14*radius*radius;
	}
};

class Window 
{
public: 
	Window (Shape *s): shape(s){}

	double area() {
		return shape->area();
	}
private:
	Shape *shape;
};


int main() 
{
	Window *wRect = new Window(new Rectangle(10,20));
	Window *wCirc = new Window(new Circle(20));
	cout << "rectangular Window:" << wRect->area() << endl;
	cout << "circular Window:" << wCirc->area() << endl;
	return 0;
}
