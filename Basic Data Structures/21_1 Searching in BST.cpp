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
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root ;
    if(val == -1)
        root=NULL;
    else 
        root = new Node(val);
    queue<Node*>q;
     if(root!=NULL)
        q.push(root);
     while(!q.empty())
    {
        // 1.ber kore ana
        Node* f = q.front();
        q.pop();

        // 2.oi node niye kaj kora
        int l,r;
        cin>>l>>r;
        Node* myleft, *myright;
        if(l==-1) 
            myleft=NULL;
        else
             myleft = new Node(l);
        if(r==-1)
             myright=NULL;
        else 
            myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        // 3. children push kora
        if(f->left!=NULL)
            q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);

    }
    return root;
}
bool search(Node* root, int val)
{
    if(root==NULL)
        return false;
    if(root->value== val)
        return true;
    if(root->value > val)
        return search(root->left,val);
    else
        return search(root->right,val);
}
int main() 
{
    Node* root =  input_tree();
    int val;
    cin>>val;
    if(search(root,val))
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}