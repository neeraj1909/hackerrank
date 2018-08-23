int getNode(SinglyLinkedListNode* head, int positionFromTail) 
{
    int count = 0;
    struct SinglyLinkedListNode *t = head;
    
    while(t)
    {
        count++;
        t = t -> next;
    }
    
    count = count - 1;
    t = head;
    
    while(t)
    {
        if(positionFromTail == count)
        {
            return t -> data;
        }
        else
        {
            count--;
            t = t -> next;
        }
    }
    return 0;
}