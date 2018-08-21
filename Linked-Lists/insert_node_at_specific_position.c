SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    struct SinglyLinkedListNode* node;
    node = create_singly_linked_list_node(data);
    
    if(head == NULL)
    {
        head = node;
    }
    
    else if(position == 0)
    {
        node -> next = head;
        head = node;
    }
    else
    {
        struct SinglyLinkedListNode* t;
        t = head;
        
        int count = 0;
        
        while(t -> next && count + 1 < position)
        {
            count++;
            t = t -> next;
        }
        
        
        if(t -> next == NULL)
        {
            node -> next = NULL;
            t -> next = node;
        }
        else
        {
            node -> next = t -> next;
            t -> next = node;     
        }
    }
    return head;
}