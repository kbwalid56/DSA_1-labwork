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

    int sum = 0;
    float avg;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        avg = sum / (n * 1.0);
    }

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << avg << endl;
}
