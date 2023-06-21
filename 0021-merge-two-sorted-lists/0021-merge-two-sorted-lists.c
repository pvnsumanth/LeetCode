/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *list=(malloc(sizeof(struct ListNode)));
    struct ListNode *last,*t;
    if(list1 && list2){
        if(list1->val<list2->val){
                list->val=list1->val;
                list->next=NULL;
                last=list;
                list1=list1->next;
            }
        else{
            list->val=list2->val;
            list->next=NULL;
            last=list;
            list2=list2->next;

        }
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                struct ListNode *t=(malloc(sizeof(struct ListNode)));
                t->val=list1->val;
                t->next=NULL;
                last->next=t;
                last=t;
                list1=list1->next;
            }
            else{
                struct ListNode *t=(malloc(sizeof(struct ListNode)));
                t->val=list2->val;
                t->next=NULL;
                last->next=t;
                last=t;
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            struct ListNode *t=(malloc(sizeof(struct ListNode)));
            t->val=list1->val;
            t->next=NULL;
            last->next=t;
            last=t;
            list1=list1->next;
        }
        while(list2!=NULL){
            struct ListNode *t=(malloc(sizeof(struct ListNode)));
            t->val=list2->val;
            t->next=NULL;
            last->next=t;
            last=t;
            list2=list2->next;
        }
    }
    else if(list1 && !list2){
        list=list1;
    }
    else{
        list=list2;
    }
    return list;

}