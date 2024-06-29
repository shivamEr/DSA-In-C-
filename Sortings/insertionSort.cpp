#include <bits/stdc++.h>
using namespace std;
// Time Complexity
// Wrost Case = O(n^2) , Ex - 7 6 4 3 2
// Best Case = O(n), Ex - 1 2 3 4 5 (in case of sorted array)

void insertionSort(int arr[],int n){
    for (int i = 1;i < n; i++)
    {
        int j =i;
        while (j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    
}
int main()
{
    int n;
    cout << "Size of Array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}