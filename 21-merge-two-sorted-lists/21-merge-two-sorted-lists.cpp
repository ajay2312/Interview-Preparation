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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        ListNode* prev=NULL;
        ListNode *t1=list1,*t2=list2;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                if(prev!=NULL){
                    prev->next=list1;
                }
                prev=list1;
                list1=list1->next;
            }
            else{
                if(prev!=NULL){
                    prev->next=list2;
                }
                prev=list2;
                list2=list2->next;
            }
        }
        if(list1==NULL)
            prev->next=list2;
        else
            prev->next=list1;
        return (t1->val<=t2->val) ? t1 : t2;
    }
};