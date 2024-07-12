#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout<<"isEmpty : "<<st.empty()<<endl;
    cout<<"Topest Element : "<<st.top()<<endl;
    st.pop();
    cout<<"After Pop()"<<endl;
    cout<<"Topest Element : "<<st.top()<<endl;
    return 0;
}