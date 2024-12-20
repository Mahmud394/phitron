/*
Question: Take a singly linked list as input and check if the linked list
 contains any duplicate value. You can assume that the maximum value will be 100.


Sample Input
5 4 8 6 2 1 -1
Sample Output
NO

Sample Input
2 4 5 6 7 4 -1
Sample Output
YES

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
        head= newnode;
        tail= newnode;
        return;
    }
    tail->Next= newnode;
    tail= newnode;
}
void check_duplicate_value(Node* &head)
{
    Node* temp = head;
    bool flag= 0;
    while(temp != NULL)
    {
        Node* temp1 = temp->Next;
        while(temp1 != NULL)
        {
            if(temp1->value == temp->value )
        {
            flag =1;
            break;
        }
        temp1 = temp1->Next;

        }
        temp = temp->Next;
    }
    if(flag==1)
    {
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }

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
    check_duplicate_value(head);


    return 0;
}