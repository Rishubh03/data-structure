void deleteAtHead(Node* &head){
    if(head == NULL) return;
    
    Node* node = head;
    head = head->next;
    
    delete node;
}

void deletion(Node* &head, int key){
    if(head==NULL) return;
    if(head->next == NULL) deleteAtHead(head);
    
    Node* temp = head;
    while(temp->next->data != key){
        temp=temp->next;
    }
    
    Node* node = temp->next;
    temp->next = temp->next->next;
    
    delete node;
}

bool search(Node* head,int key){
    while(head!=NULL){
        if(head->data == key){
            cout<<endl<<"key found";
           return true;
        }
         head=head->next;
    }
    cout<<endl<<"Key not found";
    return false;
}
