// binary search using recursion

#include <iostream>
using namespace std;
int binarySearch(int arr[], int first, int last, int target)
{
    if (last < first)
    {
        return -1;
    }
    else
    {
        int mid = (first + last) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
        {
            return binarySearch(arr, first, mid - 1, target);
        }
        else
            return binarySearch(arr, mid+1, last, target);
    }
}
int main()
{
    int n, t;
    cout<<"No of Element : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter Target Element : ";

    cin >> t;

        cout << "Index of Target : " << binarySearch(arr, 0, n - 1, t);
    return 0;
}