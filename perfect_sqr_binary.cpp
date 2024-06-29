#include<iostream>
using namespace std;

int checkPerfectSqr(int n){
    int s=1,e=n/2;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if (mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid>n){
            e = mid-1;
        }
        else
        s = mid+1;
        
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    
    if (checkPerfectSqr(n))
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
    
    
    return 0;
}