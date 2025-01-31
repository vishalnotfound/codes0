#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // contructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void inAtHead(Node *&head, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);
    head = newNode;
    head->next = temp;
}

void inAtTail(Node *&tail, int data)
{

    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void inAtPos(Node *&head, Node *&tail, int position, int data)
{
    Node *temp = head;

    int count = 1;

    // insert at head
    if (position == 1)
    {
        inAtHead(head, data);
        return;
    }

    while (count < position - 1)
    {
        temp = temp->next;
        count += 1;
    }

    if (temp->next == NULL)
    {
        inAtTail(tail, data);
        return;
    }

    Node *nodeInsert = new Node(data);
    nodeInsert->next = temp->next;
    temp->next = nodeInsert;
}

void dltNode(Node *&head, int position)
{

    // dlt first node, head node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // dlt middle of last Node
        Node *curr = head;
        Node *prev = head;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "--";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    inAtTail(tail, 15);
    inAtTail(tail, 16);
    inAtTail(tail, 17);
    inAtTail(tail, 18);

    inAtPos(head, tail, 6, 80);
    inAtTail(tail, 12);
    inAtHead(head, 99);
    inAtPos(head, tail, 1, 112);
    print(head);

    dltNode(head, 6);

    print(head);

    return 0;
}