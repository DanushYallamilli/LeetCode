/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = NULL;
    struct ListNode *head = dummy;
    // ListNode *temp = NULL;
    int carry = 0;
    int sum = 0;

    while(l1 != 0 || l2 != 0 || carry != 0)
    {
        sum = carry;
        if(l1 != 0)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != 0)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum/10;
        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode)); 
        newnode->val = sum%10;
        newnode->next = NULL;
        head->next = newnode;
        head = newnode;

    }
    return dummy->next;
}