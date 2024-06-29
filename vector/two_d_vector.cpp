#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> nums;
    vector<int> arr = {1, 2, 3, 4};
    nums.push_back(arr);
    nums.push_back(arr);
    nums.push_back(arr);

    int c = nums[0].size();
    int r = nums.size();

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    vector<vector<int>> nums2 = {{1, 2, 3, 4}, {5, 6}};
    int r2 = nums2.size();
    for (int i = 0; i < r2; i++)
    {
        int c2 = nums2[i].size();
        for (int j = 0; j < c2; j++)
        {
            cout << nums2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // input rows =n and cols = m
    // 2D vector of n*m
    int n =3,m =3;
    vector<vector<int>> nums3(n,vector<int>(m,10));
    for (int i = 0; i < nums3.size(); i++)
    {
        int c2 = nums3[i].size();
        for (int j = 0; j < c2; j++)
        {
            cout << nums3[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
