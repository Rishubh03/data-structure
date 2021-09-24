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

vector<int> levelorder(Node *node){
    vector<int> ans;
    if(!node) return ans;
    queue<Node*>q;
    
    q.push(node);
    while(!q.empty()){
        Node *temp = q.front();
        ans.push_back(temp->data);
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
        q.pop();
    }
    return ans;
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
    
    vector<int> arr = levelorder(node);
    
    for(int i =0; i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
