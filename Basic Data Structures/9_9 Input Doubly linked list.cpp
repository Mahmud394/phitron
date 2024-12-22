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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail= newNode;
        return;
    }
    tail->Next= newNode;
    newNode->prev= tail;

    tail= newNode;

}
int main() 
{
     Node* head= NULL;
    Node* tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
print_Doubly_linkedlist_forward(head);

    return 0;
}