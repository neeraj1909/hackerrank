SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode *prev = NULL, *nextnode = NULL, *p = head;
    
    while(p)
    {
        nextnode = p -> next;
        p -> next = prev;
        prev = p;
        p = nextnode;
    }
    return prev;
}