bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    struct SinglyLinkedListNode *p1 = head1, *p2 = head2;
    
    while(p1 && p2 && p1 -> data == p2 -> data)
    {
        p1 = p1 -> next;
        p2 = p2 -> next;
    }
    
    if(p1 != NULL || p2 != NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}