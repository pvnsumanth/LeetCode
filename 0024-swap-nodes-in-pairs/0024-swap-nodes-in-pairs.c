/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *p=head;
    int count=0;
    while(p){
        count++;
        p=p->next;
    }
    p=head;
    if(count<=1){
        return head;
    }
    
    else{
        if(count%2==0){
            while(p){
                int a=p->val;
                p->val=p->next->val;
                p->next->val=a;
                p=p->next->next;
            }
        }
        else{
            while(p->next){
                int a=p->val;
                p->val=p->next->val;
                p->next->val=a;
                p=p->next->next;
            }
        }
    }
    return head;
}