// Q. find a element in array that is >=target;
// Time Coplexity:- O(logN);

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    vector<int>arr(n);
    // Taking Input from User
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cin>>target;
    // Performing Binary Search to find element
    int f = 0, l =n-1,ans;
    while (f<=l)
    {
       int mid = (f+l)/2;
       if (arr[mid]>=target)
       {
        ans = mid;
        l=mid-1;
       }
       else if (arr[mid]<target)
       {
        f = mid+1;
       }

    }
    cout<<arr[ans]<<endl;

    int ind = lower_bound(arr.begin(),arr.end(), target)-arr.begin();
    cout<<arr[ind];
    
    return 0;
}