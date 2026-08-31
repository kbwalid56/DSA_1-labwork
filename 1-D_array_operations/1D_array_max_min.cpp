#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size:";
    cin >> n;

    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {

        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }

    cout << "\nmax = " << max << endl;
    cout << "min = " << min << endl;
}
