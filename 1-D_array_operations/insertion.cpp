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

    cout << endl << "Enter index to insert:";
    cin >> ind;

    int k;

    cout << "Enter insertion:";
    cin >> k;

    int i;

    for (i = n; i > ind; i--)
        arr[i] = arr[i - 1];

    arr[ind] = k;
    cout <<"New Array:"<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

}
