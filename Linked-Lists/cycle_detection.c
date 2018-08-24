bool has_cycle(SinglyLinkedListNode* head) {
    if(head == NULL)
    {
        return false;
    }
    else
    {
        struct SinglyLinkedListNode *temp = head;
        int count = 0;
        while(count < 1000)
        {
            if(temp -> next == NULL)
                return false;
            else
                temp = temp -> next;
            count++;
        }
    }
    return true;
}