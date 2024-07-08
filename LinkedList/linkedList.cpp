#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// Insertion at end
void InsertAtEnd(Node *&head, Node *&tail, int data)
{
    Node *n = new Node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }
}
void InsertAtMid(Node *&head, Node *&tail, int pos, int data)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *n = new Node(data);
    n->next = temp->next;

    temp->next = n;
}
void InsertAtFront(Node *&head, Node *&tail, int data)
{
    Node *n = new Node(data);
    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    else
    {
        n->next = head;
        head = n;
    }
}

// Print Nodes
void printNodes(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Deletion of nodes
void DeletionAtFront(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "kya ";
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

void DeletionAtEnd(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "kya ";
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        temp->next = NULL;
    }
}
int lenght(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void DeletionAtMid(Node *&head, Node *&tail, int pos)
{
    int len = lenght(head);
    if(pos==0){
        DeletionAtFront(head,tail);
    }
    else if(pos>=len-1){
        DeletionAtEnd(head,tail);
    }
    else{
        Node *temp = head;
        for (int i = 1; i <= pos-1; i++)
        {
            temp = temp->next;
        }
        Node * n = temp->next;
        temp->next = n->next;
        delete n;  
    }
}
int main()
{
    // Node *head = new Node();
    // STatic node creation
    // Node a;
    // a.data = 10;
    // a.next = NULL;
    // Node b;
    // b.data = 20;
    // b.next = NULL;
    // a.next = &b;

    // Node c;
    // c.data = 30;
    // c.next = NULL;
    // b.next = &c;
    // cout << a.data << "-->" << (a.next)->data << "-->NULL" << endl;
    // cout << a.data << "-->" << (*a.next).data << "-->NULL" << endl;
    // cout << endl
    //      << endl;
    // cout << a.data << "-->" << (a.next)->data << "-->" << (a.next)->next->data << "-->NULL" << endl;
    // cout<<a.data<<"-->"<<(*a.next).data<<"-->"<<(*a.next.next).data<<"-->NULL"<<endl;

    // Dynamically
    Node *head = NULL;
    Node *tail = NULL;
    InsertAtEnd(head, tail, 10);
    InsertAtEnd(head, tail, 20);
    InsertAtEnd(head, tail, 30);

    // insert at front
    printNodes(head);
    InsertAtFront(head, tail, 40);
    printNodes(head);
    DeletionAtEnd(head, tail);
    printNodes(head);

    return 0;
}