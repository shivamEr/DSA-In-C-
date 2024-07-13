#include<bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> NGL(int price[], int n)
    {
        stack<int> s;
        vector<int> ans(n);
        ans[0] = -1;
        s.push(0);
        for (int i = 1; i < n; i++)
        {
            while (s.size() && price[s.top()] <= price[i])
            {
                s.pop();
            }
            ans[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        return ans;
    }
};

    int main()
    {   solution s;
        int n;
        cin >> n;
        int price[n];
        for (int i = 0; i < n; i++)
            cin >> price[i];
        vector<int> ans =s.NGL(price, n);

        for (int i = 0; i < n; i++)
        {
            cout << (i - ans[i]) << " ";
        }

        return 0;
    }