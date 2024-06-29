#include<iostream>
using namespace std;

int main(){
    int n,flag=0;
    cin>>n;
    for (int i = 1; i <= n/2; i++)
    {
        if (i*i == n)
        {
           flag=1;
           break;
        }
        
    }
    if (flag)
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
    
    
    return 0;
}