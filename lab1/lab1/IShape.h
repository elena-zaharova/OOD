#include <SFML/Graphics.hpp>
#pragma once

class IShape
{
public:
	virtual double GetArea() = 0;
	virtual double GetPerimeter() = 0;
	virtual void DrawShape() = 0;
	//~IShape();
};

