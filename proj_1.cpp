#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
using namespace std;

int main()
{

	Rectangle box;
	

	std::cout << "Here is your rectangle info:\n";
	cout << "Length: " << box.getLength() << endl;
	cout << "Width: " << box.getWidth() << endl;
	cout << "Area: " << box.getArea() << endl;
	return 0;
}




