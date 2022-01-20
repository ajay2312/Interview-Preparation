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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return head;
        int len=0;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        head=dummy;
        ListNode *current=head;
        while(current!=NULL){
            len++;
            current=current->next;
        }
        int i=0;
        current=head;
        while(i<(len-n-1)){
            current=current->next;
            i++;
        }
        ListNode *node=current->next->next;
        current->next=node;
        return head->next;
    }
};