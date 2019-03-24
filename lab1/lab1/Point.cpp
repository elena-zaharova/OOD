#include "stdafx.h"
#include "Point.h"


Point::Point(int x0, int y0)
	:x(x0)
	, y(y0)
{
}

int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}

Point::~Point()
{
}

