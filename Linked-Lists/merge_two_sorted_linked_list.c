SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{  
    struct SinglyLinkedListNode* result = NULL;

    if((head1 == NULL)&&(head2 == NULL))
        return NULL;
       
    if((head1 != NULL)&&(head2 == NULL))
        return head1;
       
    if((head1 == NULL)&&(head2 != NULL))
        return head2;
    
    
    if(head1 -> data <= head2 -> data)
    {
        result = head1;
        result -> next = mergeLists(head1 -> next, head2);
    }
    else
    {
        result = head2;
        result -> next = mergeLists(head1, head2 -> next);
    }
    return result;
}