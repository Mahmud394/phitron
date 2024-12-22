#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int value;
    Node* Next;
    Node* prev;

    Node(int value)
    {
        this->value= value;
        this->Next= NULL;
         this->prev= NULL;
    }

};

void print_Doubly_linkedlist_forward(Node* head)
{
    printf("print_Doubly_linkedlist_forward: ");
    Node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->Next;
    }
    cout<<endl;

}
void insert_at_hrad(Node* &head,int val)
{
    Node* newNode = new Node(val);
    newNode->Next= head;
    head->prev= newNode;

    head= newNode;

}
int main() 
{
     Node* head = new Node(10);
    Node* a= new Node(20);
    Node* b = new Node(30);

    head->Next= a;
    a->prev= head;
    
    a->Next=b;
    b->prev= a;
insert_at_hrad(head,5);
print_Doubly_linkedlist_forward(head);

    return 0;
}