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
void delete_at_head(Node* &head,Node* tail)
{
    Node* deleteNode = head;
    head= head->Next;
    delete deleteNode;

    if(head = = NULL)
    {
        tail = NULL;
        return;
    }
    head->prev=NULL;
    
}
int main() 
{
     Node* head = new Node(10);
    Node* a= new Node(20);
    Node* tail = new Node(30);

    head->Next= a;
    a->prev= head;
    
    a->Next=tail;
    tail->prev= a;
delete_at_head(head,tail);
print_Doubly_linkedlist_forward(head);

    return 0;
}