void reversePrint(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode* p = head;
    if(p)
    {
        reversePrint(p -> next);
        printf("%d\n", p -> data);
    }
}