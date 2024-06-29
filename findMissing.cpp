#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,flag=0;
    cin>>n;
    int arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                flag=1;
                break;
            }
            else
            flag=0;
            
        }
        if (flag==0)
        {
           cout<<i;
           break;
        }
        
        
    }
    
    
    return 0;
}