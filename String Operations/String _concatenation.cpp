#include <iostream>
using namespace std;

int main()
{
    char STR[100], STREx[200];
    int i = 0, j = 0;

    cout << "Enter string 1: ";
    cin.getline(STR, 100);

    cout << "Enter string 2: ";
    cin.getline(STREx, 200);

    while (STREx[i] != '\0')
    {
        i = i + 1;
    }

    while (STR[j] != '\0')
    {
        STREx[i] = STR[j];
        i = i + 1;
        j = j + 1;
    }

    STREx[i] = '\0';

    cout << "Concatenated string = " << STREx;

    return 0;
}
