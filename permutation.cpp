#include<iostream>
using namespace std;
void permutation(string &s, int i , int n){
    if(i==n){
        cout<<s<<endl;
        return;
    }
    for (int j = i; j < n; j++)
    {
        swap(s[i], s[j]);
        permutation(s,i+1,n);
        // Back Tracking
        swap(s[i], s[j]);
    }
    
}
int main(){
    string s;
    cin>>s;
    int n = s.size();
    permutation(s,0,n);
    return 0;
}