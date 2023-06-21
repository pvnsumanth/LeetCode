/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p=head;
    struct ListNode *q=malloc(sizeof(struct ListNode));
    struct ListNode *last;
    if(p){
            q->val=p->val;
            q->next=NULL;
            last=q;
            p=p->next;
        
        while(p){
            if(p->val!=last->val){
                struct ListNode *t=malloc(sizeof(struct ListNode));
                t->val=p->val;
                t->next=NULL;
                last->next=t;
                last=t;
            }
            p=p->next;
        }
        return  q;
    }
    else{
        return p;
    }


}