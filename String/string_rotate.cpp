#include<iostream>
#include<cstring>
using namespace std;
string reverse(string s,int f,int l){
    while (f<=l)
    {
       swap(s[f],s[l]);
       f++;
       l--;
    }
    return s;
}
int main(){
    string s;
    int n;
    cout<<"Enter a String : ";
    cin>>s;
    cout<<"Enter n : ";
    cin>>n;
    int len= s.length();
    n=n%len;
    cout<<"Current String : "<<s<<endl;
    s=reverse(s,0,len-1);
    s=reverse(s,0,n-1);
    s=reverse(s,n,len-1);

    cout<<"New String : "<<s;
    
    return 0;
}