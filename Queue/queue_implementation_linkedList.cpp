
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

class Queue
{
    node *head;
    node *tail;
    int cs;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        cs = 0;
    }
    void push(int data)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            cs++;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            cs++;
        }
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "UnderFlow" << endl;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
            cs--;
        }
    }

    int peek()
    {
        if (head == NULL){
            cout << "UnderFlow" << endl;
            return -1;
        }
        return head->data;
    }

    bool empty()
    {
        return cs == 0;
    }
    int size()
    {
        return cs;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "size : " << q.size() << endl;
    cout << "front : " << q.peek() << endl;

    while (!q.empty())
    {
        cout << q.peek() << " ";
        q.pop();
    }
    return 0;
}