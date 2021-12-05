#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};


void insertTail(Node* &head, int val){
    Node* node = new Node(val);
    if(head==NULL){
        head =node;
    }
    
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next = node;
    head = temp;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }    
    cout<<"NULL";
}

void insertHead(Node* &head, int val){
    Node* node = new Node(val);
    node->next = head;
    head = node;
}

void reverseLinkedList(Node* head){
    if(head == NULL)
        return;
        
    reverseLinkedList(head->next);
    cout<<head->data<<"->";
}

int main()
{
    Node *head = new Node(10);
    insertTail(head,20);
    insertHead(head,50);
    display(head);
    cout<<endl;
    reverseLinkedList(head);
    cout<<"NULL";
    return 0;
}
