#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int value;
    Node* Next;

    Node(int value)
    {
        this->value= value;
        this->Next= NULL;
    }

};

void Insert_at_tail( Node* &head,Node* &tail,int val) 
{
    
    Node* newnode = new Node(val);
    if(head== NULL)
    {
        head=newnode;
        tail= newnode;
        
        return;
    }

   
    tail->Next= newnode;
    tail= tail->Next;  //tail= newnode;
}
void print_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
       cout<< tmp->value<<endl;
       tmp= tmp->Next;
    }


}
void sort_linked_list(Node* head)
{
    for(Node* i=head;i->Next != NULL;i=i->Next)
    {
        for(Node* j=i->Next;j != NULL;j=j->Next)
        {
            if(i->value > j->value)
            //if(i->value < j->value) 
            {
                swap(i->value,j->value);
            }

        }
    } 
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
        Insert_at_tail(head,tail,val);
    }
  sort_linked_list(head);
 print_linkedlist( head);
 


    return 0;
}