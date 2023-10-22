#include <iostream>
#include <cstdlib>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	width = 0.0;
	length = 0.0;
}

void Rectangle::setWidth(double w)
{
	if (w >= 0)
	width = w;
	else
	{
		std::cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}

void Rectangle::setLength(double len)
{ if (len >= 0)
	length = len;
  else
	{
	  cout << "Invalid length\n";
	  exit(EXIT_FAILURE);
	}
}
