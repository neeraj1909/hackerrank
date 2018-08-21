SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    struct SinglyLinkedListNode* node;
    node = create_singly_linked_list_node(data);
    
    if(llist == NULL)
    {
        llist = node;
    }
    
    else
    {
        node -> next = llist;
        llist = node;
    }
       
    return llist;    
}