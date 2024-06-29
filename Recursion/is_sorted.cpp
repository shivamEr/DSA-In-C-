#include<iostream>
using namespace std;

bool is_sorted(int a[],int n){
    if(n==1) return true;
    // boll isSmallerSorted = is_sorted(a+1,n-1);
    return (a[0]<=a[1] && is_sorted(a+1,n-1));
}
int main(){
    int a[]={1,4,6,7,9,89,90};
    int s = sizeof(a)/sizeof(int);

    cout<<is_sorted(a,s);
    return 0;
}