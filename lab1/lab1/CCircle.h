#include"Point.h"
#include "IShape.h"
#pragma once

class CCircle: public IShape
{
private:
	const double PI = 3.1415926535897932384626433832795;
public:
	Point center;
	int r = 0;

	CCircle(int radius, Point c);

	double GetArea()  override;
	double GetPerimeter()  override;
	void DrawShape()  override;

	~CCircle();
};