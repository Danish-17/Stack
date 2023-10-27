#include "Source1.cpp"
#include <iostream>

using namespace std;

int main()
{
    Stack s;
    int num = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> num;
        s.Push(num);
    }

    for (int i = 0; i < 8; i++)
    {
        cout << "The Popped Element : " << s.Pop() << endl;
    }
    return 0;
}