#include <bits/stdc++.h>

using namespace std;

// struct Node{
    
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

class Node
{
    public:
    int data;
    Node *left,*right;
    
    Node(int item){
        data = item;
        left = right = NULL;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    
    cout<<root->left->data;
    return 0;
}
