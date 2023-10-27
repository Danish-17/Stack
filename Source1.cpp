#include "Header1.h"
#include <iostream>

using namespace std;

bool Stack::isEmpty()
{
    return top == -1;
}

bool Stack::isFull()
{
    return top == MAX_SIZE - 1;
}

void Stack::Push(int arrElement)
{
    if (!isFull())
    {
        top++;
        arr[top] = arrElement;
    }
    else
    {
        cout << "Stack is full. You can not push the element in it" << arrElement << endl;
    }
}

int Stack::Pop()
{
    if (!isEmpty())
    {
        int POPPED_ELEMENT = arr[top];
        top--;
        return POPPED_ELEMENT;
    }
    else
    {
        cout << "Stack is empty. You cannot pop from an empty stack" << endl;
        return -1;
    }
}