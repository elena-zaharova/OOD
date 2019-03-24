#include "stdafx.h"
#include "CTriangle.h"
#include <math.h>

CTriangle::CTriangle(Point a, Point b, Point c) :
	one(a),
	two(b),
	three(c)
{}

double CTriangle::GetArea()
{
	double sideA = sqrt(((one.GetX() - two.GetX())*(one.GetX() - two.GetX())) + ((one.GetY() - two.GetY())*(one.GetY() - two.GetY())));
	double sideB = sqrt(((one.GetX() - three.GetX())*(one.GetX() - three.GetX())) + ((one.GetY() - three.GetY())*(one.GetY() - three.GetY())));
	double sideC = sqrt(((three.GetX() - two.GetX())*(three.GetX() - two.GetX())) + ((three.GetY() - two.GetY())*(three.GetY() - two.GetY())));
	double p = GetPerimeter() / 2;
	double area = sqrt(p*(p - sideA)*(p - sideB)*(p - sideC));

	return area;
}

double CTriangle::GetPerimeter()
{
	double sideA = sqrt(((one.GetX() - two.GetX())*(one.GetX() - two.GetX())) + ((one.GetY() - two.GetY())*(one.GetY() - two.GetY())));
	double sideB = sqrt(((one.GetX() - three.GetX())*(one.GetX() - three.GetX())) + ((one.GetY() - three.GetY())*(one.GetY() - three.GetY())));
	double sideC = sqrt(((three.GetX() - two.GetX())*(three.GetX() - two.GetX())) + ((three.GetY() - two.GetY())*(three.GetY() - two.GetY())));
	double perimeter = sideA + sideB + sideC;
	return perimeter;
}

void CTriangle::DrawShape()
{

}


CTriangle::~CTriangle()
{
}

