/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *temp,*last,*new,*q;
    if(!head){
        return NULL;
    }
    else if(!head->next){
        return head;
    }
    struct ListNode *p=head;
    int arr[1000];
    int count=0;
    int i=0;
    while(p && p->next){
        if(p->val==p->next->val){
            arr[i]=p->val;
            i++;
            count++;
            p->next=p->next->next;
        }
        else{
            p=p->next;
        }
    }
    
    struct ListNode *delete1(struct ListNode *z,int n){
        
        if(z && z->val==n){
            // printf("hai");
            z=z->next;
            return z;
        }
        struct ListNode *q=z;
        while(q && q->next){
            if(q->next->val==n){
                // printf("%d ",n);
                q->next=q->next->next;
            }
            q=q->next;
        }
        return z;
    }
    for(int i=0;i<count;i++){
        // printf("%d ",arr[i]);
        head=delete1(head,arr[i]);
    }
    return head;
}