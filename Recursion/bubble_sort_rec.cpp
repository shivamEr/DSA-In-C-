// Bubble sort using recursion

#include <iostream>
using namespace std;
int bubbleSort(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }

        return bubbleSort(arr, n - 1);
    }
}
int main()
{
    int n;
    cout<<"Enter N : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
