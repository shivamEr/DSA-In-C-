#include <iostream>
using namespace std;

int main() {
    int n, m, key, ans = 0;
    cin >> n >> m;
    int arr[n][m];  // Declaration of a 2D array

    // Reading the 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> key;
    int low =0, high = n*m-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        int row = mid/n;
        int col = mid%n;
        if (arr[row][col]==key)
        {
            cout<<"Faund!";
            return 0;
        }
        else if(arr[row][col]<key){
            low = mid+1;
        }
        else
        high = mid -1;
        
    }
    
    cout<<"Not Faund!";
    // cout << ans;

    return 0;
}
