#include<bits/stdc++.h>
using namespace std;

// Brute fource 
int power(int x,int n){
    int p=1;
    for (int i = 0; i < n; i++)
    {
        p = p*x;
    }
    return p;
    
}

// Using Binary
int findNthRoot(int n,long long int m){
    long long int lo =1,hi = m;
	int ans =-1;
    while (lo<=hi)
    {
        long mid = (lo+hi)/2;
        if(pow(mid,n)==m){
            return mid;
        }
        else if(pow(mid,n)<m){
			ans =mid;
        	lo = mid+1;
        }
        else {
            hi = mid -1;
		}
    }
    return ans;
    
}
int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n;
		int k;
		cin>>n>>k;
		cout<<findNthRoot(k,n)<<endl;
	}
	return 0;
}