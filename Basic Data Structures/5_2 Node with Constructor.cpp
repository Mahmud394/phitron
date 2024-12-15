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
    Node a(10),b(20),c(30);

    a.Next=&b;
    b.Next=&c;
   

    cout<<a.value<<endl;
    cout<<a.Next->value<<endl;
    cout<<a.Next->Next->value<<endl;



    return 0;
}