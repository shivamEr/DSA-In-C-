#include <bits/stdc++.h>
using namespace std;

int cnt; 
void solve(vector<int>& a, int i, int target, vector<int>& output) {
    int n = a.size();
    if (i == n) {
        if (target == 0) {
            cnt++;
            // Print the first group
            for (auto x : output)
                cout << x << " ";
            cout << "and ";

            // Print the second group (elements not in the first group)
            for (int j = 0; j < n; j++) {
                bool flag = false;
                for (int k = 0; k < output.size(); k++) {
                    if (output[k] == a[j]) {
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    cout << a[j] << " ";
                }
            }
            cout << endl;
            return;
        }
    } else {
        // Include the current element in the subset
        output.push_back(a[i]);
        solve(a, i + 1, target - a[i], output);
        output.pop_back();

        // Exclude the current element from the subset
        solve(a, i + 1, target, output);
        return;
    }
}

int main() {
    cnt = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i]; 

    int sum = accumulate(a.begin(), a.end(), 0); 
    if (sum % 2 == 0) {
        int target = sum / 2;
        vector<int> output;
        solve(a, 0, target, output);
        cout << cnt << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
