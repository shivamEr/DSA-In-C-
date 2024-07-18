#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int>q1;
    queue<int>q2;

    public:
    void push(int data){
        q1.push(data);
    }

    int pop(){
        int d;
        while (!q1.empty())
        {
            d = q1.front();
            q1.pop();
            if(!q1.empty()) q2.push(d);
        }
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return d;
        
    }
    int top(){
        int d;
        while (!q1.empty())
        {
            d = q1.front();
            q1.pop();
            q2.push(d);
        }

         while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return d;
    }

    bool empty(){
        return q1.empty();
    }
    int size(){
      return q1.size();
    }
    
};
int main(){
Stack s;
s.push(0);
s.push(1);
s.push(2);
s.push(3);

cout<<"isEmpty : "<<s.empty()<<endl;
cout<<"pop : "<<s.pop()<<endl;
cout<<"size : "<<s.size()<<endl;
cout<<"top : "<<s.top()<<endl;
cout<<"pop : "<<s.pop()<<endl;
cout<<"pop : "<<s.pop()<<endl;
return 0;

}