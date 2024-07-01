#include<iostream>
using namespace std;
void solve(string &s, int i , string output){
    int n = s.size();
    if(i==n){
        cout<<output<<endl;
        return;
    }
    solve(s,i+1,output);
    solve(s,i+1,output+s[i]);
}
int main(){
    string s;
    cin>>s;
    solve(s,0,"");
    return 0;
}