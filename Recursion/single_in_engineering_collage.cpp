#include <iostream>
#include <algorithm>
using namespace std;
int ans;

// Function to calculate the total wood cut for a given saw blade height 'H'
long long woodCollected(int arr[], int n, int H)
{
    long long totalWood = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > H)
        {
            totalWood += arr[i] - H;
        }
    }
    // cout<<totalWood<<" ";
    return totalWood;
}
void cut_forest(int arr[], int left, int n, int right, int target)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        long int sum = woodCollected(arr, n, mid);
        if (sum == target)
        {
            ans = mid;
            return;
        }
        if (sum >= target)
        {
            left = mid + 1;
            ans = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    sort(arr, arr + n);
    int maxHeight = arr[n - 1];
    cut_forest(arr, 0, n, maxHeight, x);
    cout << ans << endl;

    // delete[] arr;
    return 0;
}
