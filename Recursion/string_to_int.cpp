#include<iostream>
using namespace std;
int stringToInt(string s,int n){
    // static int ans=0;
    if (n==0)
    {
        return 0;
    }
    else {
        int d = s[n-1]-'0';
        return  stringToInt(s,n-1)*10+d;
    }
    
}
int main(){
    string n;
    cin>>n;
    int len = n.length();
    cout<<"Int = "<<stringToInt(n,len);
    return 0;
}