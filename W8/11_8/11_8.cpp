// 11_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Charley Mao     20181125
// I'm not too sure what exactly this questions is expecting for output...
//So here I maded the classes without output and they all have 4 sides. This questions seems odd.
#include "pch.h"
#include <iostream>

using namespace std;

class Quadrilateral {
public:
	unsigned int side_a, side_b, side_c, side_d;
	unsigned int perimeter;
	
	Quadrilateral(int a, int b, int c, int d){
		side_a = a;
		side_b = b;
		side_c = c;
		side_d = d;
	}
};

class Trapezoid :public Quadrilateral{
public:
	Trapezoid(int a, int b, int c, int d) :Quadrilateral(a, b, c, d){}
};

class Parallelogram :public Trapezoid {
public:
	Parallelogram(int a, int b, int c, int d) :Trapezoid(a, b, c, d) {}
};

class Rectangle :public Parallelogram {
public:
	Rectangle(int a, int b, int c, int d) :Parallelogram(a, b, c, d){}
};

class Square :public Rectangle{
public:
	Square(int a, int b, int c, int d) :Rectangle(a, b, c, d){}
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
