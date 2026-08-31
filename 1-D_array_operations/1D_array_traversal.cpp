#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];
    cout <<"Enter Array elements :"<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout <<"Inputted Array :"<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

}
