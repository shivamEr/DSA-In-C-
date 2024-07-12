#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    vector<int> vec;

public:
    void push(int x)
    {
        vec.push_back(x);
    }
    int pop()
    {
        int x = vec.back();
        vec.pop_back();
        return x;
    }
    int top()
    {
        return vec.back();
    }
    bool empty()
    {
        return vec.empty();
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout<<"Traverse : ";
    while (s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}