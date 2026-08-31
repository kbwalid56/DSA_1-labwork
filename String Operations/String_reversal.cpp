#include <iostream>
using namespace std;

int main()
{
    char STR[100];
    int len = 0;

    cout << "Enter a string: ";
    cin.getline(STR, 100);

    while (STR[len] != '\0')
    {
        len++;
    }

    cout << "Length of the string = " << len;

     int start = 0, end = len - 1;

    while (start < end)
    {
        char temp = STR[start];

        STR[start] = STR[end];

        STR[end] = temp;

        start++;

        end--;
    }

    cout << "\nReversed string: " << STR<< endl;

    return 0;
}

