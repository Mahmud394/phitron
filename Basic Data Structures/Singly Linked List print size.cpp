/*
Question: Take a singly linked list as input and print the size of the linked list.

Sample Input
2 1 5 3 4 8 9 -1
Sample Output
7
Sample Input
5 1 4 5 -1
Sample Output
4

*/
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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
        tail= newnode;
        return;
    }
   tail->Next= newnode;
   tail = newnode;
}
void print_linkedlist_size(Node* &head)
{
    Node* temp = head;
    int size = 0;
    while(temp != NULL)
    {
        size++;
        temp= temp->Next;
    }
    cout<<size;
}
int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
    
    if(val==-1)
    {
        break;
    }
    insert_at_tail(head,tail,val);
    }
    print_linkedlist_size(head);

    return 0;
}