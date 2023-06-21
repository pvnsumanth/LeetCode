/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k){
    struct ListNode *p=head;
    struct ListNode *q;

    int count=0;
    while(p){
        count++;
        p=p->next;
    }
    if(count>0){
        k=k%count;
    }
    p=head;
    
    while(k>0){
        struct ListNode *r=head;
        if(p && p->next){
            while(p->next->next!=NULL){
                p=p->next;
               
            }
            q=p;
            p=p->next;
            p->next=r;
            q->next=NULL;
            head=p;
        }
        k--;
    }
    return head;
}