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

    head->Next=a;
    a->Next=b;

    cout<<head->value<<endl;
    cout<<head->Next->value<<endl;  //a->value
    cout<<head->Next->Next->value<<endl; //b->value

    return 0;
}