#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int value;
    Node* Next;
    Node* prev;

    Node(int value)
    {
        this->value= value;
        this->Next= NULL;
         this->prev= NULL;
    }

};
int main() 
{
    Node* head = new Node(10);
    Node* a= new Node(20);
    Node* tail = new Node(30);

    head->Next= a;
    a->prev= head;
    
    a->Next= tail;
    tail->prev= a;


    return 0;
}