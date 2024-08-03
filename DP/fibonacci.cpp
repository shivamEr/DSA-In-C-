
#include<iostream>
#include<vector>
using namespace std;

// Recursion code : O(2^n)
int fibo(int n){
    if (n <= 1)
    return n;

    return fibo(n-1)+fibo(n-2);
}

// memorization / Top - Down Approach O(n)
int fibo_memo(int n,vector<int>&dp){
    // base case
    if(n<=1) return n;

    // check kar rhe ha ki pahle se ans calculated h ya nhi
    if(dp[n]!=-1) return dp[n];

    // memorization
    dp[n] = fibo_memo(n-1,dp) + fibo_memo(n-2,dp);
    return dp[n];

}

// Tabular form / Bottom - Up Approach : O(n)
int fibo_tab(int n){
    vector<int> dp(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i =2;i<n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];

int main(){
    int n;
    cin>>n;
    // Assigin -1 jo batayega dp recent function call
    vector<int>dp(n+1,-1);
    int fib = fibo_memo(n,dp);
    cout<<fib<<endl;
    return 0;
}