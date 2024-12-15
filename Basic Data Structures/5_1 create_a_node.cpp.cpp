#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int value;
    Node* Next;

};

int main() 
{
    Node a,b,c;

    a.value=10;
    b.value=20;
    c.value=30;

    a.Next=&b;
    b.Next=&c;
    c.Next= NULL;

    cout<<a.value<<endl;
    cout<<a.Next->value<<endl;
    cout<<a.Next->Next->value<<endl;


    return 0;
}