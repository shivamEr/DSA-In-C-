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

Node *mergeList(Node *head1, Node *head2)
{
    Node *dummy = new Node(-1);
    Node *ans = dummy;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            dummy->next = head1;
            head1 = head1->next;
            dummy = dummy->next;
        }
        else
        {
            dummy->next = head2;
            head2 = head2->next;
            dummy = dummy->next;
        }
    }

    while (head1 != NULL)
    {
        dummy->next = head1;
        head1 = head1->next;
        dummy = dummy->next;
    }

    while (head2 != NULL)
    {
        dummy->next = head2;
        head2 = head2->next;
        dummy = dummy->next;
    }
    dummy->next = NULL;
    return ans->next;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        InsertAtEnd(head1, tail1, data);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    for (int i = 0; i < m; i++)
    {
        int data;
        cin >> data;
        InsertAtEnd(head2, tail2, data);
    }

    Node *mid = mergeList(head1, head2);
    printNodes(mid);
    return 0;
}