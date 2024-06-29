#include <bits/stdc++.h>
using namespace std;
// Time Complexity
// Wrost Case = O(n^2) , Ex - 7 6 4 3 2
// Best Case = O(n), Ex - 1 2 3 4 5 (in case of sorted array)

int binarySearch(int arr[],int n,int target){
   int start =0,end = n-1;
   while (start<end)
   {
    int mid = (start+mid)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]<target)
    start = mid+1;
    else
    end = mid -1;
   }
   
}
int main()
{
    int n,target;
    cout << "Size of Array :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Target element :";
    cin>>target;
    cout<<binarySearch(arr,n,target);
    

    return 0;
}