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

void Insert_at_tail( Node* &head,Node* &tail,int val) //O(1)
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

int main() 
{
    Node* head= new Node(10);
      Node* a= new Node(20);
      Node* tail= new Node(30);
//   Node* b= new Node(30);
//   Node* tial= b;

head->Next=a;
a->Next=tail;

//cout<<"Tail: "<<tail->value<<endl;
Insert_at_tail(head,tail,100);
 print_linkedlist( head);
 //cout<<"Tail: "<<tail->value<<endl;


    return 0;
}