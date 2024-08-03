
#include <bits/stdc++.h>
using namespace std;
// without Dp : O(2^n)
int solve(int n)
{
    if (n <= 1)
        return 1;

    return solve(n - 1) + solve(n - 2);
}
// with Dp : O(n)
int solve_memo(int n, int dp[])
{
    if (n <= 1)
        return 1;

    // check function call huaa hai ya nhi
    if (dp[n] != -1)
        return dp[n];

    // memorization
    dp[n] = solve_memo(n - 1, dp) + solve_memo(n - 2, dp);
    return dp[n];
}

// DP with Tabular Form : O(n)
int solve_tab(int n)
{
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    int dp[n + 1];
    // initialize with -1
    memset(dp, -1, sizeof(dp)); 
    cout << solve_memo(n, dp) << endl;
    cout << solve_tab(n) << endl;
    cout << solve(n) << endl;
}
