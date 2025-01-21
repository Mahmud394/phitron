#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>>q;
    if(root){
        q.push({root,1});
    }
    while(!q.empty())
    {
        pair<TreeNode<int>*,int> parent = q.front();
        q.pop();
        TreeNode<int>* node = parent.first;
        int level = parent.second;

        if(node->val == searchedValue)
            return level;

        if(node->left)
            q.push({node->left, level + 1});
        if(node->right)
            q.push({node->right, level + 1});
    }
}
/*
// left view of binary tree

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    bool fre[3005]= {false};
     queue<pair<TreeNode<int>*,int>>q;
    if(root){
        q.push({root,1});
    }
    while(!q.empty())
    {
        pair<TreeNode<int>*,int> parent = q.front();
        q.pop();
        TreeNode<int>* node = parent.first;
        int level = parent.second;

        if (fre[level] == false) {
          ans.push_back(node->data);
          fre[level] = true;
        }

        if(node->left)
            q.push({node->left, level + 1});
        if(node->right)
            q.push({node->right, level + 1});
    }
    return ans;

}

\\ right view of binary tree

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
    bool fre[3005]= {false};
     queue<pair<TreeNode*,int>>q;
    if(root){
        q.push({root,1});
    }
    while(!q.empty())
    {
        pair<TreeNode*,int> parent = q.front();
        q.pop();
        TreeNode* node = parent.first;
        int level = parent.second;

        if (fre[level] == false) {
          ans.push_back(node->val);
          fre[level] = true;
        }

        if(node->right)
            q.push({node->right, level + 1});
        if(node->left)
            q.push({node->left, level + 1});
        
    }
    return ans;
    }
};
*/

/*
//Diameter Of Binary Tree

int mx;
int get_height(TreeNode<int> *root)
{
    if(root == NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int l = get_height(root->left);
    int r = get_height(root->right);
    int d = l+r;
    mx = max(mx,d);
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root){
	mx =0;
    int h =  get_height(root);
    return mx; 
}
*/

/*

// Special Binary Tree.  (0 0r 2 child)

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    if (root == NULL)
        return true;
    if((root->left != NULL && root->right == NULL)  || (root->left == NULL && root->right != NULL))
        return false;
    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);
    
    return (l && r);
*/

/*
//  Balanced Tree
Definition of a Balanced Tree:
For every node in the tree, the height difference between the left and 
right subtrees is at most 1.

class Solution {
public:
int height(TreeNode* root) {
    if (!root) return 0;
    return max(height(root->left), height(root->right)) + 1;
}
    bool isBalanced(TreeNode* root) {
        if (!root) return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    if (abs(leftHeight - rightHeight) > 1) {
        return false;
    }

    return isBalanced(root->left) && isBalanced(root->right);
    }
};
*/