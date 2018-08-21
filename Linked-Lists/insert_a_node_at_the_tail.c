SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    struct SinglyLinkedListNode* node;
    node = create_singly_linked_list_node(data);
    
    if(head == NULL)
    {       
        head = node;
    }
    
    else
    {
        struct SinglyLinkedListNode* t;
        t = head;
        while(t -> next)
        {
            t = t->next;
        }     
        t -> next = node;
    }

    return head;
}
