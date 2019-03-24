#include "stdafx.h"
#include "CCircle.h"
#include <math.h>


CCircle::CCircle(int radius, Point c)
	:r(radius)
	, center(c)
{
}

double CCircle:: GetArea()
{
	double area = PI*r*r;
	return area;
}

double CCircle::GetPerimeter() 
{
	double perimeter = 2* PI *r;
	return perimeter;
}

void CCircle::DrawShape()
{
	sf::CircleShape circle;
	circle.setRadius(r);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(5);
	circle.setPosition(center.GetX(), center.GetY());
}



CCircle::~CCircle()
{
}
