#include "stdafx.h"
#include "CRectangle.h"

CRectangle::CRectangle(Point a, Point b)
	:p1(a)
	, p2(b)
{
}

double CRectangle::GetArea()
{
	int sideA = p2.GetX() - p1.GetX();
	int sideB = p2.GetY() - p1.GetY();
	if (sideA < 0)
		sideA *= -1;
	if (sideB < 0)
		sideB *= -1;
	double area = sideA * sideB;
	return area;
}

double CRectangle::GetPerimeter()
{
	int sideA = p2.GetX() - p1.GetX() ;
	int sideB = p2.GetY() - p1.GetY() ; 
	if (sideA < 0)
		sideA *= -1;
	if (sideB < 0)
		sideB *= -1;
	double perimeter = 2 * (sideA + sideB);
	return perimeter;
}

void CRectangle::DrawShape()
{

}


CRectangle::~CRectangle()
{
}
