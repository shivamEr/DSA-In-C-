#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int heights[n];
        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }

        int leftmax[n];
        int rightmax[n];
        leftmax[0] = heights[0];
        for (int i = 1; i < n; i++)
        {
            leftmax[i] = max(leftmax[i - 1], heights[i]);
        }
        rightmax[n - 1] = heights[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            rightmax[i] = max(rightmax[i + 1], heights[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int height = (min(leftmax[i], rightmax[i])) - heights[i];
            if (height > 0)
            {
                ans = ans + height * 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}