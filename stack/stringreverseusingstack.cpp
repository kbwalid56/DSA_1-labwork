#include<iostream>
using namespace std;
#define MAX 100
char stack[MAX];
int TOP = -1;
void push(char val)
{
    TOP=TOP+1;
    stack[TOP]=val;
}
char pop()
{
    char value=stack[TOP];
    TOP=TOP-1;
    return value;
}

int main()
{
    int n;
    cout<<"enter string length:";
    cin>>n;
    cout<<"enter string:";
    cout<<endl;
    for(int i=0; i<=n-1; i++)
    {
        char ch;
        cin>>ch;
        push(ch);
    }
    cout<<"reversed string:";
    for(int i=0; i<=n-1; i++)
    {
        cout<<pop();
    }
    cout<<endl;
    return 0;
}
