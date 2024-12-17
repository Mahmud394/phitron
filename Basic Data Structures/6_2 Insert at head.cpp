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

void Insert_at_head( Node* &head,int val)  //O(1)
{
    Node* newnode = new Node(val);
    newnode->Next= head;
    head = newnode;
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
  Node* b= new Node(30);

head->Next=a;
a->Next=b;

Insert_at_head(head,100);
 print_linkedlist( head);


    return 0;
}