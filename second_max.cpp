#include<bits/stdc++.h>
using namespace std;
int findMax(int arr[],int n){
    int maxi;
    for (int i = 0; i < n; i++)
    {
        // maxi = max(arr,n);
    }
    return maxi;
    
}
int main(){
    int arr[]={2,8,1,10,4};
    int n = sizeof(arr)/sizeof(int);
    int max = findMax(arr,n);
    int secMax  INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>secMax && arr[i]!=max)
        {
            secMax = arr[i];
        }
        
    }
    cout<<secMax<<endl;
    
    return 0;
}