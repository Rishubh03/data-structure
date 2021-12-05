Node* reverseLinkedList(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;
    
    while(currptr != NULL){
        nextptr = currptr->next;
        
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;
    }
    
    return prevptr;
}

Node* recursiveReverse(Node* &head){
    if(head == NULL || head->next == NULL) return head;
    
    Node* newHead =  recursiveReverse(head->next);
    head->next->next = head;
    head->next=NULL;
    return newHead;
}

