#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
    Node(int item){
        this->data = item;
        left=right=NULL;
    }
};

int height(Node *node){
   if(!node) return 0;
   int x = height(node->left);
   int y = height(node->right);
   return (max(x,y)+1);
}

int main()
{
    Node *node = new Node(10);
    node->left = new Node(20);
    node->right = new Node(30);
    node->left->left = new Node(40);
    node->left->right = new Node(50);
    node->right->left = new Node(60);
    node->right->right = new Node(40);
    
    int ans = height(node);
    cout<<ans;

    return 0;
}
