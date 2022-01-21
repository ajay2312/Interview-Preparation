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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *dummy=new ListNode(0);
        ListNode *head=dummy;
        while(l1!=NULL && l2!=NULL){
            int sum=l1->val+l2->val;
            sum+=carry;
            ListNode *node=new ListNode(sum%10);
            dummy->next=node;
            dummy=node;
            l1=l1->next;
            l2=l2->next;
            carry=sum/10;
        }
        while(l1!=NULL){
            int sum=l1->val+carry;
            ListNode *node=new ListNode(sum%10);
            dummy->next=node;
            dummy=node;
            l1=l1->next;
            carry=sum/10;
        }
        while(l2!=NULL){
            int sum=l2->val+carry;
            ListNode *node=new ListNode(sum%10);
            dummy->next=node;
            dummy=node;
            l2=l2->next;
            carry=sum/10;
        }
        if(carry){
            ListNode *node=new ListNode(carry);
            dummy->next=node;
        }
        return head->next;
    }
};