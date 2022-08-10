#include<iostream>
#include <fstream>
#include <string>
using namespace std;

class NegativeNumberException
{
private:
    string m_error{ "The number entered must not be negative" };
public:
    NegativeNumberException() = default;
    const char* getError()
    {
        return m_error.c_str();
    }
};

class Square
{
public:
    Square(){};
    virtual void print_square() = 0;
protected:
    double a;
    double b;
    double c;
};

class Rectangle : public Square
{
public:


    virtual void print_square() override
    {
        cout << "Square of rectangle with sides " << a << " and " << b << " is: " << a * b << endl;
    }
    void set_rectangle(double user_a, double user_b)
    {
        if (a || b  < 0)
        {
            throw NegativeNumberException();
        }
        else
        {
            this->a = user_a;
            this->b = user_b;
        }
    }
};

class Circle : public Square
{
public:

    virtual void print_square() override
    {
        cout << "Square of circle with radius " << c << " is: " << 2*3.14*c*c << endl;
    }
    void set_circle(double user_c)
    {
        if (c < 0)
        {
            throw NegativeNumberException();
        }
        else
        {
            this->c = user_c;
        }
    }
};

class Right_Triangle : public Square
{
public:

    virtual void print_square()
    {
        cout << "Square of right rectangle with legs " << a << " and " << b << " is: " << a * b / 2 << endl;

    }
    void set_right_triangle(double user_a,  double user_b)
    {
        if (a || b  < 0)
        {
            throw NegativeNumberException();
        }
        else
        {
            this->a = user_a;
            this->b = user_b;
        }
    }
};

class Trapeze : public Square
{
public:

    virtual void print_square()
    {
        cout << "Square of trapeze with grounds " << a << " and " << b << " is " << (a + b) / 2 * c << endl;

    };
    void set_trapeze(double user_a, double user_b, double user_c)
    {
        if (a || b || c < 0)
        {
            throw NegativeNumberException();
        }
        else
        {
            this->a = user_a;
            this->b = user_b;
            this->c = user_c;
        }
    };
};


int main()
{
    Rectangle rectangle{};
    try
    {
        rectangle.set_rectangle(4, 0);
    }
    catch (NegativeNumberException& exception)
    {
        cerr << "An exception occurred (" << exception.getError() << ")\n";
    }
    return 0;
}

