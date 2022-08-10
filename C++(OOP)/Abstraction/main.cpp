#include <iostream>
#include "Employee.h"
#include "Square.h"
using namespace std;

int main()
{
    Employee* emp[3]{};
    emp[0] = new President("Barack", "Obama", 60);
    emp[1] = new Manager("Jon", "Winchester", 55);
    emp[2] = new Worker("Luke", "Skywalker", 30);


    emp[0]->Print();
    emp[1]->Print();
    emp[2]->Print();

    double a{5};
    double b{3};
    double c(2.44);
    Square* squ[4] = { new Rectangle(a,b), new Circle(c), new Right_Triangle(a,b), new Trapeze(a,b,c) };
    squ[0]->print_square();
    squ[1]->print_square();
    squ[2]->print_square();
    squ[3]->print_square();
    return 0;
};



