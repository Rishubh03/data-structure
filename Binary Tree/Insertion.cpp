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

   void insertright(Node* head, int val){ //insert at right subtree
     Node* temp= head;

     while(temp->right != NULL)
     temp= temp->right;
     
     temp->right=new Node(val);

   };
   
   void insertleft(Node* head, int val){ //insert at left subtree
     Node* temp = head;

     while(temp->left != NULL)
     temp = temp->left;

     temp->left=new Node(val);
   };
   
   void preorder(Node* head){ //void preorder traversal
     if(head == NULL)
     return;

     cout<<head->data<<" ";
     preorder(head->left);
     preorder(head->right);

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
  
  root->insertleft(root,55);
  root->insertright(root,31);
  cout<<"Preorder traversal"<<endl;
  root->preorder(root);
  
  return 0;
}
