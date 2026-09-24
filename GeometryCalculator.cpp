/*
	Program Name: GeometryCalculator.cpp
	Programmer: Kai Tanaka Camargo
	Date: 9-23-2026
	Version: 1.0
	A program using switch and case that calculates 
	the area of a circle, rectangle, or triangle
	depending on the user input until a sentinel
	value is inputted to exit the program, in this
	case, 4.
*/
#pragma once

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	/* Declaration section */
	int choice;
	double area;

	// Circle Declarations
	double pi = 3.14159;
	double r;

	// Rectangle Declarations
	double length;
	double width;

	// Triangle Declarations
	double base;
	double height;

	// Loop section
	cout << "Geometry Calculator" << endl;

	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit" << endl;

	cout << "Select from options 1-4: ";
	cin >> choice;

	while (choice != 4) 
	{
		while (cin.fail())
		{
			cin.clear(); // Clear error flags
			cin.ignore(1000, '\n'); // Discard invalid input
			cin >> choice;
		}

		if (choice > 3 || choice < 1)
		{
			cout << "Error, value out of bounds" << endl;
			
			cout << "Select from options 1-4: ";
			cin >> choice;

			continue;
		}

		// Switch between the choices
		switch (choice) 
		{
		case 1:		// Calculate area of a circle
			cout << "Enter radius of the circle: ";
			cin >> r;

			while (r < 0)
			{
				cout << "Error, enter positive number!" << endl;

				cout << "Enter radius of the circle: ";
				cin >> r;
			}

			area = pi * pow(r, 2);
			cout << "Area of the circle: " << area << endl;

			break;
		case 2:		// Calculate area of a rectangle
			cout << "Enter length of the rectangle: ";
			cin >> length;

			while (length < 0) 
			{
				cout << "Error, enter positive number!" << endl;

				cout << "Enter length of the rectangle: ";
				cin >> length;
			}

			cout << "Enter width of the rectangle: ";
			cin >> width;

			while (width < 0) 
			{
				cout << "Error, enter positive number!" << endl;

				cout << "Enter width of the rectangle: ";
				cin >> width;
			}

			area = length * width;
			cout << "Area of the rectangle: " << area << endl;

			break;

		case 3:		// Calculate area of a triangle
			cout << "Enter length of the base of the triangle: ";
			cin >> base;

			while (base < 0) 
			{
				cout << "Error, enter positive number!" << endl;

				cout << "Enter length of the base of the triangle: ";
				cin >> base;
			}

			cout << "Enter height of the triangle: ";
			cin >> height;

			while (height < 0) 
			{
				cout << "Error, enter positive number!" << endl;

				cout << "Enter height of the triangle: ";
				cin >> height;
			}

			area = base * height * 0.5;
			cout << "Area of the triangle: " << area << endl;

			break;
		default:	// Invalid choice entered
			cout << "Invalid choice entered" << endl;

			break;

		} // End of switch

		cout << "Select from options 1-4: ";
		cin >> choice;
	}

	return 0;
} // End of program
