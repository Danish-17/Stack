#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 100 


class Stack
{
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() { top = -1; }

    bool isEmpty();
    bool isFull();
    void Push(int);
    int Pop();
};

#endif