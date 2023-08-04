/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *l3,*temp,*last;
    int x,y,z;
    if(l1 && l2){
        x=l1->val+l2->val;
        y=x%10;
        z=x/10;
        l3=(struct ListNode *)malloc(sizeof(struct ListNode));
        l3->val=y;
        l3->next=NULL;
        last=l3;
        l1=l1->next;
        l2=l2->next;
    }
    else if(l1 && !l2){
        x=l1->val;
        y=x%10;
        z=x/10;
        l3=(struct ListNode *)malloc(sizeof(struct ListNode));
        l3->val=y;
        l3->next=NULL;
        last=l3;
        l1=l1->next;
    }
    else if(!l1 && l2){
        x=l2->val;
        y=x%10;
        z=x/10;
        l3=(struct ListNode *)malloc(sizeof(struct ListNode));
        l3->val=y;
        l3->next=NULL;
        last=l3;
        l2=l2->next;
    }
    while(l1 && l2){
        temp=(struct ListNode *)malloc(sizeof(struct ListNode));
        x=z+l1->val+l2->val;
        y=x%10;
        z=x/10;
        temp->val=y;
        temp->next=NULL;
        last->next=temp;
        last=temp;
        l1=l1->next;
        l2=l2->next;
        
    }
    while(l1){
        temp=(struct ListNode *)malloc(sizeof(struct ListNode));
        x=z+l1->val;
        y=x%10;
        z=x/10;
        temp->val=y;
        temp->next=NULL;
        last->next=temp;
        last=temp;
        l1=l1->next;
    }
    while(l2){
        temp=(struct ListNode *)malloc(sizeof(struct ListNode));
        x=z+l2->val;
        y=x%10;
        z=x/10;
        temp->val=y;
        temp->next=NULL;
        last->next=temp;
        last=temp;
        l2=l2->next;
    }
    while(z!=0){
        temp=(struct ListNode *)malloc(sizeof(struct ListNode));
        x=z;
        y=x%10;
        z=x/10;
        temp->val=y;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
    return l3;
}