#include<iostream>
using namespace std;

int solve(int n){
    // base case
    if(n==0) return 1;
    if(n<1) return 0;
    // recursive case
    return solve(n-1)+solve(n-2)+solve(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}