#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s;
    cout<<"Enter a String : ";
    cin>>s;
    // gets(s);
    int f =0, l = s.length()-1;
    while (f<=l)
    {
       swap(s[f],s[l]);
       f++;
       l--;
    }
    cout<<"String : "<<s<<endl;
    
    return 0;
}