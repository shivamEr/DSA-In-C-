#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s1;
    cout<<"Enter a String : ";
    cin>>s1;

    for (int i = 0; i < s1.length(); i++)
    {
        string s2;
        for (int j = i; j < s1.length(); j++)
        {
            s2 = s2+s1[j];
            cout<<s2<<endl;
        }
        
    }
    
    return 0;
}