/*
Question: Take two singly linked lists as input and check if their sizes are same or not.

Sample Input

2 1 5 3 4 9 -1
1 2 3 4 5 6 -1
Sample Output
YES
Sample Input
5 1 4 5 -1
5 1 4 -1
Sample Output
NO


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
int  print_linkedlist_size(Node* &head)
{
    Node* temp = head;
    int size = 0;
    while(temp != NULL)
    {
        size++;
        temp= temp->Next;
    }
    return size;
}
int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1= NULL;
    Node* tail1 = NULL;
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
    while(true)
    {
        cin>>val;
    
    if(val==-1)
    {
        break;
    }
    insert_at_tail(head1,tail1,val);
    }
    
    if (print_linkedlist_size(head) == print_linkedlist_size(head1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}