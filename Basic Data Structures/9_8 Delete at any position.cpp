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
void delete_at_any_pos(Node* &head,int idx)
{
    
    
    Node* temp = head;
    for(int i=1;i<idx;i++)
    {
        temp=temp->Next;

    }
    Node* deleteAnyPos = temp->Next;
    temp->Next= temp->Next->Next;
    temp->Next->prev=temp;
    delete deleteAnyPos;

   

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
delete_at_any_pos(head,1);
print_Doubly_linkedlist_forward(head);

    return 0;
}