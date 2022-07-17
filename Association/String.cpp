#include <iostream>
#include "String.h"
#include <string.h>

MyString::MyString()
{
    arr = new char[len] {};
}

MyString::MyString(const char str[])
{
    this->len = strlen(str);
    arr = new char[len + 1];
    strcpy(arr, str);

}

MyString::MyString(const MyString& obj)
{
    this->len = obj.len;
    this->arr = new char[this->len + 1];
    strcpy(this->arr, obj.arr);
}

MyString::~MyString()
{
    delete[] arr;
    arr = nullptr;
}

void MyString::operator = (MyString& other)
{
    this->len = other.len;
    delete[] arr;
    this->arr = new char[this->len + 1];
    strcpy(this->arr, other.arr);
}

MyString MyString::operator + (MyString& other)
{
    int str_length = this->len + other.len;
    char* pointer = new char[str_length + 1]{};
    pointer = strcat(other.arr, this->arr);
    return MyString(pointer);

}
void MyString::operator += (MyString& other)
{
    int str_length = this->len + other.len;
    char* pointer = new char[str_length + 1]{};
    pointer = strcat(other.arr, this->arr);
    arr = pointer;
}

bool MyString::operator == (MyString& other)
{
    if (strcmp(this->arr, other.arr) == 0)
    {
        return true;
    }
    return false;
}

bool MyString::operator != (MyString& other)
{
    if ( strcmp(this->arr, other.arr) == 0)
    {
        return false;
    }
    return true;
}

int MyString::length()
{
    return this->len;
}




