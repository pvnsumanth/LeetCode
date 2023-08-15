/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode *p,*rhead,*temp,*last;
    p=head;
    if(!head){
        return NULL;
    }
    int count=0;
    while(p){
        if(p->val<x){
            if(count==0){
                rhead=(struct ListNode *)malloc(sizeof(struct ListNode));
                rhead->val=p->val;
                rhead->next=NULL;
                last=rhead;
                count=1;
            }
            else{
                temp=(struct ListNode *)malloc(sizeof(struct ListNode));
                temp->val=p->val;
                temp->next=NULL;
                last->next=temp;
                last=last->next;
            }
        }
        p=p->next;
    }
    while(head){
        if(head->val>=x){
            if(count==0){
                rhead=(struct ListNode *)malloc(sizeof(struct ListNode));
                rhead->val=head->val;
                rhead->next=NULL;
                last=rhead;
                count=1;
            }
            else{
                temp=(struct ListNode *)malloc(sizeof(struct ListNode));
                temp->val=head->val;
                temp->next=NULL;
                last->next=temp;
                last=last->next;
            }
        }
        head=head->next;
    }
    
    
    return rhead;
}