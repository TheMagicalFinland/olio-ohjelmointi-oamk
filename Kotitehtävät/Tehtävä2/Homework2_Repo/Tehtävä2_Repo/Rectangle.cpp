#include "Rectangle.h"

double Rectangle::getArea()
{
	return width * height;
}

double Rectangle::getCircum()
{
	return 2 * (width + height);
}

void Rectangle::setWidth(double value)
{
	width = value;
}

void Rectangle::setHeight(double value)
{
	height = value;
}
