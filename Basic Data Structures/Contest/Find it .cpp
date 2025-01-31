/*
In a mystical forest, a magical tree is composed of nodes, where each node is either a 
branch or a leaf. Your task is to find the leaf type that appears most frequently in the tree.

Note: If multiple leaf types have the same frequency, return the smallest leaf type numerically.

Input Format

Each node either has 0 or 2 children.
Each leaf node contains an integer value representing its type.
If a node does not exist, it is represented by -1.
Constraints

The tree will have at least one leaf node.
Leaf types will be integers within the range 1≤ type ≤100
Output Format

An integer representing the most frequent leaf type. If there is a tie, return the smallest type.
Sample Input 0

5 3 8 2 2 7 2 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 0

2
Explanation 0


*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;

    if (val == -1) 
        return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* current = q.front();
        q.pop();

        int left_val, right_val;
        cin >> left_val >> right_val;

        if (left_val != -1) 
        {
            current->left = new Node(left_val);
            q.push(current->left);
        }

        if (right_val != -1) 
        {
            current->right = new Node(right_val);
            q.push(current->right);
        }
    }
    return root;
}

int most_frequent_leaf(Node* root)
{
    if (!root) 
        return -1;

    unordered_map<int, int> freq;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();

        if (!node->left && !node->right)
        {
            freq[node->value]++;
        }

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }

    int max_freq = 0, result = INT_MAX;
    for (auto  & it : freq) {
        if (it.second > max_freq || (it.second == max_freq && it.first < result)) 
        {
            max_freq = it.second;
            result = it.first;
        }
    }

    return result;
}

int main() {
    Node* root = input_tree();
    cout << most_frequent_leaf(root) << endl;
    return 0;
}
