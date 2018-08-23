SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) 
{
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        struct SinglyLinkedListNode *t = head, *temp = NULL;
        
        while(t -> next)
        {
            if(t -> data == t -> next -> data)
            {
                temp = t -> next;
                t -> next = t -> next -> next;
                free(temp);
            }
            else
            {
                t = t -> next;
            }
        }
    } 
    return head;
}