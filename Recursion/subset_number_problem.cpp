#include <bits/stdc++.h>
using namespace std;
int cnt;
void subset_recursion(int n, int arr[], int target, int i, vector<int> &output)
{
    if (i == n)
    {
        //
        int sum = 0;
        for (int j = 0; j < output.size(); j++)
        {
            sum += output[j];
        }
        if (sum == target)
        {
            for (int j = 0; j < output.size(); j++)
            {
                cout << output[j] << " ";
            }
            cout << " ";

            cnt++;
        }
        return;
    }
    output.push_back(arr[i]);
    subset_recursion(n, arr, target, i + 1, output);
    output.pop_back();
    subset_recursion(n, arr, target, i + 1, output);
}
int main()
{
    cnt = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    vector<int> output;
    subset_recursion(n, arr, target, 0, output);
    cout << endl;
    cout << cnt << endl;
    return 0;
}