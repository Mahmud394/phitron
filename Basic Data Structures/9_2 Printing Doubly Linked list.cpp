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
void print_Doubly_linkedlist_backward(Node* tail)
{
    printf("print_Doubly_linkedlist_backward: ");
    Node* temp = tail;
    while(temp!= NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->prev;
    }
    cout<<endl;

}
int main() 
{
    Node* head = new Node(10);
    Node* a= new Node(20);
    Node* tail = new Node(30);

    head->Next= a;
    a->prev= head;
    
    a->Next= tail;
    tail->prev= a;

print_Doubly_linkedlist_forward(head);
print_Doubly_linkedlist_backward(tail);
    return 0;
}