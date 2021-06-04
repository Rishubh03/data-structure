#include<bits/stdc++.h>
using namespace std;

class Node{ 
  public:
   int data;
   Node* left;
   Node* right;

   Node(int val){
     data = val;
     left = NULL;
     right = NULL;
   };

   void preorder(Node* head){ //preorder traversal
     if (head==NULL)
     return;

     cout<<head->data<<" ";
     preorder(head->left);
     preorder(head->right);
   };

  void inorder(Node* head){ //inorder traversal
     if (head==NULL)
     return;
     inorder(head->left);
     cout<<head->data<<" ";
     inorder(head->right);
   };

   void postorder(Node* head){ //postorder traversal
     if (head==NULL)
     return;
     postorder(head->left);
     postorder(head->right);
     cout<<head->data<<" ";
   };
};

int main(){
  Node* root = new Node(10);
  root->left = new Node(15);
  root->right = new Node(30);
  root->left->left= new Node(12);
  root->left->right = new Node(40);
  root->right->left = new Node(2);
  root->right->right =  new Node(6);


  cout<<"Preorder traversal"<<endl;
  root->preorder(root);
  cout<<endl<<"Postorder Traversal"<<endl;
  root->postorder(root);
  cout<<endl<<"Inorder Traversal"<<endl;
  root->inorder(root);
  return 0;
}
