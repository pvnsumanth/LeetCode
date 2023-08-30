/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head){
    if(!head->next){
        return NULL;
    }
    struct ListNode *p=head,*q=head;
    struct ListNode *r;
    while(q && q->next && p->next){
        r=p;
        p=p->next;
        q=q->next;
        if(q){q=q->next;}
    }
    r->next=p->next;
    free(p);
    return head;
}