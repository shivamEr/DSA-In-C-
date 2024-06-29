#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int totalR = 0;
        for (int i = 0; i < n; i++)
        {
            totalR += min(a[i] * c1, c2);
        }
        int finalAnsR = min(totalR, c3);
        int TotalC = 0;
        for (int i = 0; i < m; i++)
        {
            TotalC += min(b[i] * c1, c2);
        }
        int finalAnsC = min(TotalC, c3);

        int ans = min(finalAnsC + finalAnsR, c4);
        cout << ans << endl;
    }
    return 0;
}