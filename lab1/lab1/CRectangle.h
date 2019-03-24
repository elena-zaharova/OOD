#include"Point.h"
#include "IShape.h"
#pragma once

class CRectangle : public IShape
{
public:

	CRectangle(Point a, Point b);

	double GetArea() override;
	double GetPerimeter() override;
	void DrawShape() override;

	~CRectangle();
	Point p1;
	Point p2;
};

