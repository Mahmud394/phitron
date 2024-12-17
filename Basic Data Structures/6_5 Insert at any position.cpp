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

void Insert_at_any_pos( Node* &head,int inx,int val)  // O(idx)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i=1;i<inx;i++)
    {
        tmp= tmp->Next;
    }
    newnode->Next= tmp->Next;
    tmp->Next= newnode;

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

Insert_at_any_pos(head,2,100);
 print_linkedlist( head);


    return 0;
}