#include<bits/stdc++.h>
using namespace std;
// Finding left first greater element using MONOTONIC STACK
void NSL(int arr[],int n){
    stack<int>st;
    vector<int>ans(n,-1);
    ans[0] = -1;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[i]<=arr[st.top()])
        {
           st.pop();
        }
        ans[i]= st.empty()?-1:arr[st.top()];
        st.push(i);
        
    }
    
    cout<<"After Finding First Greater Left Elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
        
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    NSL(arr,n);
    
}