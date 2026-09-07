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

    // Selection Sort
    for (int k = 0; k < n - 1; k++)
    {
        int small = A[k];
        int pos = k;
        int j = k + 1;

        while (j < n)
        {
            if (small > A[j])
            {
                small = A[j];
                pos = j;
            }

            j++;
        }

        int t = A[k];
        A[k] = A[pos];
        A[pos] = t;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
