#include <iostream>
using namespace std;

int main()
{
    char str1[100];
    char str2[100];

    cout << "Enter text: ";
    cin.getline(str1, 100);

    cout << "Enter pattern: ";
    cin.getline(str2, 100);

    int n = 0;
    int m = 0;

    // Find length of text
    while (str1[n] != '\0')
    {
        n++;
    }

    // Find length of pattern
    while (str2[m] != '\0')
    {
        m++;
    }

    int i = 0;

    while (i <= n - m)
    {
        int c = 0;

        for (int j = 0; j < m; j++)
        {
            if (str1[i + j] == str2[j])
            {
                c++;
            }
        }

        if (c == m)
        {
            cout << "Found at index " << i << endl;
        }

        i++;
    }
    cout<<"Not Found!!";
    return 0;
}
