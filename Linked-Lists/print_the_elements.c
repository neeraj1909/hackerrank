void printLinkedList(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode* t;
    t = head;
    if(head)
    {
        while(t != NULL)
        {
        printf("%d\n", t->data);
        t = t->next;        
        }
    }
}
