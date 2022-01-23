/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    int findlen(ListNode *head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    
    int pairSum(ListNode* head) {
        int len=findlen(head);
        len=len/2-1;
        ListNode *prev=NULL,*next,*current=head;
        for(int i=0;i<=len;i++){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        int ans=0;
        while(next!=NULL){
            ans=max(ans,next->val+prev->val);
            next=next->next;
            prev=prev->next;
        }
        return ans;
    }
};