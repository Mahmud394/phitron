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

int main() 
{
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);

    head->Next=a;
    a->Next=b;
    b->Next=c;

    // cout<<head->value<<endl;
    // cout<<head->Next->value<<endl;  //a->value
    // cout<<head->Next->Next->value<<endl; //b->value
    // cout<<head->Next->Next->Next->value<<endl;  //c->value

    Node* tmp = head;
    while(tmp != NULL)
    {
       cout<< tmp->value<<endl;
       tmp= tmp->Next;
    }

    return 0;
}