#pragma once
#include<iostream>
using namespace std;

class Employee
{
public:
    Employee(){};
    Employee(string name, string surname, int age)
    {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }
    virtual void Print() = 0;
protected:
    string name;
    string surname;
    int age;
};

class Worker : public Employee
{
public:
    Worker(){}
    Worker(string name, string surname, int age) : Employee(name, surname, age) {}
    void Print() override
    {
        cout << "Hi, I'm worker!!!" << endl;
        cout << "My name:  \t" << name << endl;
        cout << "My surname: \t" << surname << endl;
        cout << "My age:  \t" << age << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(){};
    Manager(string name, string surname, int age) : Employee(name, surname, age) {}
    void Print() override
    {
        cout << "Hi, I'm manager!!!" << endl;
        cout << "My name:  \t" << name << endl;
        cout << "My surname: \t" << surname << endl;
        cout << "My age:  \t" << age << endl;
    }
};

class President :public Employee {
public:
    President(){};
    President(string name, string surname, int age) : Employee(name, surname, age) {}
    void Print() override
    {
        cout << "Hi, I'm President!!" << endl;
        cout << "My name:  \t" << name << endl;
        cout << "My surname: \t" << surname << endl;
        cout << "My age:  \t" << age << endl;
    }
};