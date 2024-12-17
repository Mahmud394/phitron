/*
recursion

#include <bits/stdc++.h>
using namespace std;
void rec(int i,int n)
{
    //base case
    if(i>n)
    {
        return;
    }
    //  ascending 
    // cout<<i<<endl;
    // rec(i+1,n);
    
   rec(i+1,n);
   cout<<i<<endl;
    
    
}
int main() 
{
    int n=5;
    rec(1,n);

    return 0;
}
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
void  print_reverse(Node* tmp)
{
    //base case
    if(tmp==NULL)
    {
        return;
    }
    
    print_reverse(tmp->Next);
   cout<<tmp->value<<endl;
    
    
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

 print_reverse( head);

 


    return 0;
}