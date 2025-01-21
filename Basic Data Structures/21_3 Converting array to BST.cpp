#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int value;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->value= value;
        this->left= NULL;
        this->right= NULL;
    }

};

void levelorder(Node* root)
{
    if(root==NULL)
    {
        cout<<"No Tree"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        
        Node* f = q.front();
        q.pop();

        
        cout<<f->value<<" ";

       
        if(f->left!=NULL)
            q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);

    }
}
Node*  convert_arr_to_bst(int arr[],int si,int l,int r)
{
    if(l > r)
        return NULL;

    int mid = (l+r)/2;
    Node* root =new Node(arr[mid]);
    Node* leftroot = convert_arr_to_bst(arr,si,l,mid-1);
    Node* rightroot = convert_arr_to_bst(arr,si,mid+1,r);
    root->left = leftroot;
    root->right = rightroot;

    return root;
}
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   Node* root = convert_arr_to_bst(arr,n,0,n-1);   //arr,size,left,right
   levelorder(root);

    return 0;
}