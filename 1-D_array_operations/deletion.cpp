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

    int ind;

    cout << endl << "Enter index to delete:";
    cin >> ind;

    int i;

    for (i = ind; i < n; i++)
        arr[i] = arr[i + 1];

    n = n - 1;
    cout<<"New array:"<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

}
