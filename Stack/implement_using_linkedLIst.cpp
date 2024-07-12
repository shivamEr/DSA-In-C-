#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack
{
private:
    node *head;

public:
    Stack()
    {
        head = NULL;
    }

    void push(int data)
    {
        node *n = new node(data);
        n->next = head;
        head = n;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            return head->data;
        }
    }
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"top : "<<s.top()<<endl;
    s.pop();
    cout<<"top : "<<s.top()<<endl;
    s.pop();
    cout<<"top : "<<s.top()<<endl;
    return 0;
}