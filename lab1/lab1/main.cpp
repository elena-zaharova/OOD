#include "stdafx.h"
#include "Point.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include <fstream>
#include <string>
#include "IShape.h"
#include "CCircle.h"
#include "CRectangle.h"
#include "CTriangle.h"

using namespace std;


void getPoint(string str, char before[10], char after[10])
{
	int j = 0, k = 0;
	bool ispoint = true;
	for (int i = 0; i <= str.size(); ++i)
	{
		if (str[i] == ',')
		{
			ispoint = false;
			str.erase(i, 1);
		}
		if (ispoint)
		{
			before[j] = str[i];
			++j;
		}
		else
		{
			after[k] = str[i];
			++k;
		}
	}

}

int main()
{
	fstream infile;
	infile.open("input.txt");

	ofstream outfile;
	outfile.open("output.txt");

	if (!infile)
	{
		cout << "File not found" << endl;
		return 1;
	}
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
		}
		string str;
		int point_x1, point_x2, point_x3, point_y1, point_y2, point_y3, radius;
		while (!infile.eof())
		{
			getline(infile, str, ' ');
			if (str == "TRIANGLE:")
			{
				getline(infile, str, ';');
				str.erase(0, 3);
				char before[10], after[10];
				getPoint(str, before, after);
				point_x1 = atoi(before);
				point_y1 = atoi(after);

				getline(infile, str, ';');
				str.erase(0, 4);
				getPoint(str, before, after);
				point_x2 = atoi(before);
				point_y2 = atoi(after);
			
				getline(infile, str, '\n');
				str.erase(0, 4);
				getPoint(str, before, after);
				point_x3 = atoi(before);
				point_y3 = atoi(after);

				Point a(point_x1, point_y1);
				Point b(point_x2, point_y2);
				Point c(point_x3, point_y3);

				CTriangle triangle(a, b, c);
				double perimeterTri = triangle.GetPerimeter();
				double areaTri = triangle.GetArea();
				cout << "Perimeter: " << perimeterTri << endl;
				cout << "Area: " << areaTri << endl;

			}
			else
			{
				if (str == "RECTANGLE:")
				{
					getline(infile, str, ';');
					str.erase(0, 3);
					char before[10], after[10];
					getPoint(str, before, after);
					point_x1 = atoi(before);
					point_y1 = atoi(after);

					getline(infile, str, '\n');
					str.erase(0, 4);
					getPoint(str, before, after);
					point_x2 = atoi(before);
					point_y2 = atoi(after);
					Point a(point_x1, point_y1);
					Point b(point_x2, point_y2);

					CRectangle rectangle(a, b);
					double perimeterRec = rectangle.GetPerimeter();
					double areaRec = rectangle.GetArea();
					cout << "Perimeter: " << perimeterRec << endl;
					cout << "Area: " << areaRec << endl;
					
				}
				else
				{
					if (str == "CIRCLE:")
					{
						getline(infile, str, ';');
						str.erase(0, 2);
						char before[10], after[10];
						getPoint(str, before, after);
						point_x1 = atoi(before);
						point_y1 = atoi(after);

						getline(infile, str, '\n');
						str.erase(0, 3);

						char r[10];
						for (int i = 0; i <= str.size(); ++i)
						{
							r[i] = str[i];
						}
						radius = atoi(r);
						Point center(point_x1, point_y1);

						CCircle circle(radius, center);
						double perimetrCircle = circle.GetArea();
						double areaCircle = circle.GetPerimeter();
						cout << "Perimeter: " << perimetrCircle << endl;
						cout << "Area: " << areaCircle << endl;
						
						
					}
				}

			}
		}
		window.clear();
		window.display();
	}

	return 0;
}