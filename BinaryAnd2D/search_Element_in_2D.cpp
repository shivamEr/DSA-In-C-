#include <iostream>
using namespace std;

int binSearch(int arr[], int l, int r, int key) {
    int f = l;
    while (f <= r) {
        int mid = (f + r) / 2;
        if (arr[mid] == key) {
            return 1;  // Key found
        }
        else if (arr[mid] > key) {
            r = mid - 1;
        }
        else {
            f = mid + 1;
        }
    }
    return 0;  // Key not found
}

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

    // Performing binary search in each row where key could be present
    for (int i = 0; i < n; i++) {
        if (arr[i][0] <= key && arr[i][m - 1] >= key) {
            ans = binSearch(arr[i], 0, m - 1, key);
            if (ans == 1) {
                break;
            }
        }
    }

    cout << ans;

    return 0;
}
