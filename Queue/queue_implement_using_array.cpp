
#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int s; // Capacity of Queue
    int cs; // current size

public:
    CircularQueue(int s)
    {
        this->s = s;
        this->front = 0;
        this->rear = s - 1;
        cs = 0;
        arr = new int{s};
    }
    void push(int data)
    {
        if (cs < s)
        {
            rear = (rear + 1) % s;
            arr[rear] = data;
            cs++;
        }
        else
        {
            cout << "Queue is full" << endl;
        }
    }

    void pop()
    {
        if (cs > 0)
        {
            front = (front + 1) % s;
            cs--;
        }
        else
        {
            cout << "Queue is Empty" << endl;
        }
    }

    int peek(){
        if(cs==0) {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        return cs==0;
    }
    int size(){
        return cs;
    }
    
};

int main(){
    CircularQueue q(5);
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<q.size()<<endl;
    cout<<q.peek()<<endl;

    while (!q.empty())
    {
        cout<<q.peek()<<" ";
        q.pop();
    }
    return 0;

}