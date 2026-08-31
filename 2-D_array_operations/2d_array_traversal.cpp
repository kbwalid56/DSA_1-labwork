#include <iostream>
using namespace std;

int main()
{
    int r;
    int c;

    cout << "enter row:";
    cin >> r;

    cout << "enter column:";
    cin >> c;

    int arr[r][c];

    cout << "input 2d array:" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    }

    cout << endl << endl;

    cout << "output 2d array:" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }

    return 0;
}
