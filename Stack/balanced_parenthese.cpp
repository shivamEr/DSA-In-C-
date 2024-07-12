#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char>st;

    string s;
    cin>>s;
    // if(s.size()%2!=0){
    //     cout<<"Not Balanced!";
    //     return 0;
    // }
    // st.push('c');
    for (int i = 0; i < s.size(); i++)
    {
       if (s[i]=='(' || s[i]=='{' || s[i]=='[')
       {
        st.push(s[i]);
       }
       else if((!st.empty() && (s[i]==')' && st.top()=='(') ||(s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='['))) st.pop();
    //    else st.push(s[i]);
    else{
        cout<<"Not Balanced ";
        return 0;
    }
       
    }
    // st.pop();
    if(st.empty()) cout<<"Balanced ";
    else cout<<"Not Balanced";
    
    return 0;
}