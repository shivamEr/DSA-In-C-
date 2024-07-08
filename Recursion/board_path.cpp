#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, vector<int> &output)
{
    if(n<0) return 0;
    if (n == 0)
    {
        for (int j = 0; j < output.size(); j++)
        {
            cout << output[j];
        }
        cout << " ";
        return 1;
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        output.push_back(i);
        ans = ans+solve(n-i,m,output);
        output.pop_back();
    }
    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> output;
    int ans = solve(n,m,output);
    cout<<endl<<ans<<endl;
    return 0;
}