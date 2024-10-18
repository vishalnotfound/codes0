#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    void display(){
        cout<<"data = "<<data<<endl;
        cout<<"\n next= "<<next;
    }
};


int main()
{
    node * node1 = new node();
    node1 -> data = 12;
    node1 -> next = nullptr;
    node1->display();

    return 0;
}