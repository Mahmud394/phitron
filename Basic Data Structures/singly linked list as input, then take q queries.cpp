/*
Question: Take a singly linked list as input, then take q queries.
 In each query you will be given an index and value. 
 You need to insert those values in the given index and print the linked list. 
 If the index is invalid print “Invalid”.


Sample Input

10 20 30 -1
1 40
5 50
4 50
0 100
7 40
1 110
7 40
Sample Output
10 40 20 30
Invalid
10 40 20 30 50
100 10 40 20 30 50
Invalid
100 110 10 40 20 30 50
100 110 10 40 20 30 50 40


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
void Insert_at_head( Node* &head,int val)  //O(1)
{
    Node* newnode = new Node(val);
    newnode->Next= head;
    head = newnode;
}

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
int  size(Node* &head)
{
    Node* temp = head;
    int si = 0;
    while(temp != NULL)
    {
        si++;
        temp= temp->Next;
    }
    return si;
}
void print_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
       cout<< tmp->value<<" ";
       tmp= tmp->Next;
    }
cout<<endl;

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
    int idx;
    while(cin>>idx>>val)
    {
        
        if( idx==0)
        {
            Insert_at_head(head,val);
            print_linkedlist( head);
        }
       else if(size(head) == idx)
        {
            Insert_at_tail(head,tail,val);
            print_linkedlist( head);
        }
       else if(size(head) < idx)
        {
            cout<<"Invlid"<<endl;
        }
        else{
            Insert_at_any_pos(head,idx,val);
            print_linkedlist( head);
        }
    }
 

    return 0;
}