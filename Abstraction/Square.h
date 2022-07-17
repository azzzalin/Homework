#pragma once
#include<iostream>
using namespace std;

class Square
{
public:
    Square(double a, double b, double c)
    {
        this -> a = a;
        this -> b = a;
        this -> c = a;

    }
    virtual void print_square() = 0;
protected:
    double a;
    double b;
    double c;
};

class Rectangle : public Square
{
public:
    Rectangle(double a, double b) : Square(a, b, c) {};
    virtual void print_square() override
    {
        cout << "Square of rectangle with sides " << a << " and " << b << " is: " << a * b << endl;
    }
};

class Circle : public Square
{
public:
    Circle(double c) : Square(a, b, c) {};
    virtual void print_square() override
    {
        cout << "Square of circle with radius " << c << " is: " << 2*3.14*c*c << endl;
    }
};

class Right_Triangle : public Square
{
public:
    Right_Triangle(double a, double b) : Square(a, b, c) {};
    virtual void print_square()
    {
        cout << "Square of right rectangle with legs " << a << " and " << b << " is: " << a * b / 2 << endl;

    }
};

class Trapeze : public Square
{
public:
    Trapeze(double a, double b, double c) : Square(a, b, c){};
    virtual void print_square()
    {
        cout << "Square of trapeze with grounds " << a << " and " << b << " is " << (a + b) / 2 * c << endl;

    }
};