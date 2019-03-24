#include"Point.h"
#include "IShape.h"

#pragma once

class CTriangle : public IShape
{
public:

	CTriangle(Point a, Point b, Point c);

	double GetArea()  override;
	double GetPerimeter()  override;
	void DrawShape()  override;

	~CTriangle();
	Point one;
	Point two;
	Point three;
};
