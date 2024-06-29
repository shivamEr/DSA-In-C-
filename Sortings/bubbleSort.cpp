#include<bits/stdc++.h>
using namespace std;
 // Wrost Case = O(n^2);
 // Best Case = O(n);

void bublesort(int arr[], int n){
    for(int i =n-1;i>0;i--){
        bool isSorted = true; // to hande Best Case of algoritham O(n)
        for (int j = 0; j < i; j++)
        {
            if (arr[j]>arr[j+1]);
            swap(arr[j],arr[j+1]);
            isSorted = false;
            
        }
        if (isSorted == true)
        {
            break;
        }
        
        
    }
}

int main(){
    int n;
    cout<<"Size of Array :";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bublesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}