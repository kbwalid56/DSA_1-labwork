#include <iostream>
using namespace std;

#define MAX 10

int stack[MAX];
int top = -1;

// Push operation
void stackPush(int value)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow\n";
        return;
    }
    top = top + 1;
    stack[top] = value;
}

// Pop operation
int stackPop()
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
        return -1;
    }
    int value = stack[top];
    top = top - 1;
    return value;
}

// Print the stack
void display()
{
    if (top == -1)
    {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = 0; i <= top; i++)
        cout << stack[i] << " ";
    cout<<endl;
    cout << "(TOP = " << top << ")\n";
}

int main()
{
    stackPush(1);
    stackPush(2);
    stackPush(3);
    stackPush(4);
    stackPush(5);
    display();              // 1 2 3 4 5 6 (TOP = 5)

    // Pop twice
    cout << "Popped: " << stackPop() << endl;   // 6
    cout << "Popped: " << stackPop() << endl;   // 5
    display();              // 1 2 3 4 (TOP = 3)

   return 0;
}
