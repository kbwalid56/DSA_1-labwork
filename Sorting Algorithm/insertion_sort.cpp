#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int A[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // Insertion Sort
    for (int k = 1; k < n; k++)
    {
        int temp = A[k];
        int j = k - 1;

        while (j >= 0 && temp <= A[j])
        {
            A[j + 1] = A[j];
            j = j - 1;
        }

        A[j + 1] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
