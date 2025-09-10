/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = head;

    struct ListNode *prev = dummy;
    struct ListNode *last =dummy;

    for(int i=0;i <=n; i++)
    {
        last = last->next;
    }

    while(last != NULL)
    {
        prev = prev->next;
        last = last->next;
    }
    //Deleting the nth node from the last
    struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp = prev->next;
    prev -> next = temp -> next;
    free(temp);

    //Deleting the dummy node which is before the head node for better memory management
    struct ListNode* newHead = dummy->next;
    free(dummy);
    return newHead;
}