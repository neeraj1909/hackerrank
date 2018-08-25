DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    struct DoublyLinkedListNode *t = head, *node, *temp = NULL;
    node = create_doubly_linked_list_node(data);
    
    if(head == NULL)
    {
        return NULL;
    }
    else if(node -> data <= t -> data )
    {
        node -> next  = head;
        head = node;
        node -> prev = NULL;
        node -> next -> prev = node;
    }
    else
    {
        while(t -> next && node -> data >= t -> data)
        {
            t = t -> next;
        }
        
        if(t -> next == NULL)
        {
            if(node -> data >= t -> data)
            {
                node -> next = t -> next;
                node -> prev = t;
                t -> next = node;
            }
            else
            {
                temp = t -> prev;
                
                node -> prev = temp;
                node -> next = t;
                t -> prev = node;
                temp -> next = node;
            }
        }
        else
        {
            temp = t -> prev;
            node -> prev = temp;
            node -> next = t;
            t -> prev = node;
            temp -> next = node;
        }
    }
    return head;
}