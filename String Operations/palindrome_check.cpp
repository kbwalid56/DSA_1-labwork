#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    int start = 0, end = len - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            cout << "Not Palindrome";
            return 0;
        }

        start++;
        end--;
    }

    cout << "Palindrome";

    return 0;
}
