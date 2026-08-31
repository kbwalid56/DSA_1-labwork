#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char substr[100];

    int n, m;
    int i, j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter starting position: ";
    cin >> m;

    cout << "Enter number of characters: ";
    cin >> n;

    i = m;

    while (str[i] != '\0' && n > 0)
    {
        substr[j] = str[i];

        i++;
        j++;
        n--;
    }

    substr[j] = '\0';

    cout << "Substring: " << substr;

    return 0;
}
