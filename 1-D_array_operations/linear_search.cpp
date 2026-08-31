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

    int k;

    cout << "Enter element to search:";
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << "element found at index " << i;
            return 1;
        }
    }

    cout << "element not found";

    return 0;
}
