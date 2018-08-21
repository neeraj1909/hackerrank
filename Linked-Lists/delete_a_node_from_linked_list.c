SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(position == 0)
    {
        struct SinglyLinkedListNode* p = head;
        head = head -> next;
        free(p);
    }
    else
    {
        struct SinglyLinkedListNode* p = head;
        int count = 0;
        while(p -> next && count + 1 < position)
        {
            p = p -> next;
            count++;
        }
        struct SinglyLinkedListNode* temp = p -> next;
        p -> next = temp -> next;
        free(temp);
    }
    return head;
}