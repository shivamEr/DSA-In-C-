#include <bits/stdc++.h>
using namespace std;

// Using Monotonic Stack (Decresing Order)
void NSR(int arr[], int n)
{
    vector<int> ans(n, -1);
    stack<int> st;
    st.push(arr[n - 1]); // We can also push index to solve it.

    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    cout << "After Finding Next Greater Elemnets : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
    NSR(arr, n);

    return 0;
}