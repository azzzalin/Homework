#include "String.h"
#include <iostream>
#include <string.h>

class MyBitString :public MyString
{
public:
    MyBitString();
    MyBitString(const char str[]);
    MyBitString(const MyBitString& obj);
    ~MyBitString();
    void change_sign();
    void operator = (MyBitString& other);
    void operator += (MyBitString& other);
    bool operator == (MyBitString& other);
    bool operator != (MyBitString& other);
    MyBitString operator + (MyBitString& other);
};

MyBitString::MyBitString()
{
    arr = new char[len] {};
}

MyBitString::~MyBitString()
{
    delete[] arr;
    arr = nullptr;
}

MyBitString::MyBitString(const char str[])
{
    this->len = strlen(str);
    arr = new char[len + 1]{};
    bool check = true;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if ((str[i] != '0') && (str[i] != '1'))
        {
            check = false;
            break;
        }
    }

    if (check) strcpy(arr, str);

}

MyBitString::MyBitString(const MyBitString& obj)
{
    this->len = obj.len;
    this->arr = new char[this->len + 1];
    strcpy(this->arr,obj.arr);

}

void MyBitString::operator =( MyBitString& other)
{
    this->len = other.len;
    delete[] arr;
    this->arr = new char[this->len + 1];
    strcpy(this->arr, other.arr);
}


void MyBitString::operator += (MyBitString& other)
{
    int str_length = this->len + other.len;
    char* pointer = new char[str_length + 1]{};
    pointer = strcat(other.arr, this->arr);
    arr = pointer;
}

MyBitString MyBitString::operator + (MyBitString& other)
{
    int str_length = this->len + other.len;
    char* pointer = new char[str_length + 1]{};
    pointer = strcat(other.arr, this->arr);
    return MyBitString(pointer);

}

bool MyBitString::operator == (MyBitString& other)
{
    if (strcmp(this->arr, other.arr) == 0)
    {
        return true;
    }
    return false;
}

bool MyBitString::operator != (MyBitString& other)
{
    if (strcmp(this->arr, other.arr) == 0)
    {

        return false;
    }

    return true;
}

void MyBitString::change_sign()
{
    if (arr[0] == '0')
    {
        arr[0] = '1';
    }

    else arr[0] = '0';

}



