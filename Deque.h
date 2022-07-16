#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Deque
{
    T arr[60];
    int front;
    int end;
    int size;

public:
    Deque(){};
    Deque(int size)
    {
        front = -1;
        end = 0;
        this->size = size;
    }
    void insert_front(T data);
    void insert_end(T data);
    void delete_front();
    void delete_end();
    bool isFull();
    bool isEmpty();
    T getFront();
    T getEnd();
};
template <typename T>
bool Deque<T>::isFull()
{
    return ((front == 0 && end == size - 1) || front == end + 1);
}
template <typename T>
bool Deque<T>::isEmpty()
{
    return (front == -1);
}
template <typename T>
void Deque<T>::insert_front(T data)
{
    if (isFull())
    {
        cout << "Full\n" << endl;
        return;
    }

    if (front == -1)
    {
        front = 0;
        end = 0;
    }
    else
        front = front - 1;

    arr[front] = data;
}

template <typename T>
void Deque<T>::insert_end(T data)
{
    if (isFull()) {
        cout << " Full\n " << endl;
        return;
    }

    if (front == -1)
    {
        front = 0;
        end = 0;
    }

    else
        end = end + 1;

    arr[end] = end;
}
template <typename T>
void Deque<T>::delete_front()
{
    if (isEmpty()) {
        cout << "Is Empty\n" << endl;
        return;
    }

    if (front == end)
    {
        front = -1;
        end = -1;
    }
    else if (front == size - 1)
        front = 0;

    else
        front = front + 1;
}
template <typename T>
void Deque<T>::delete_end()
{
    if (isEmpty()) {
        cout << " Is Empty\n" << endl;
        return;
    }

    if (front == end) {
        front = -1;
        end = -1;
    }
    else if (end == 0)
        end = size - 1;
    else
        end = end - 1;
}

int main()
{
    Deque<int> first(10);


    cout << first.isEmpty() << endl;

}