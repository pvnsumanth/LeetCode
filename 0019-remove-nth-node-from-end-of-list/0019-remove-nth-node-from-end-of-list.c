/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
      struct ListNode* p=head;
      int count=0;
      while(p!=NULL){
        count++;
        p=p->next;
      }
      
      count=count-n;
      if(count==0){
        head=head->next;
      }
      else{
        p=head;
        if(count>1){
          while(count!=1){
            p=p->next;
            count--;
          }
        }
        // printf("%d\n",p->val);
        p->next=p->next->next;
      }
        return head;
}