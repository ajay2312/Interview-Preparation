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
    
    ListNode* merge(ListNode* l1,ListNode* l2){
        if(l1==NULL)
             return l2;
        else if(l2==NULL)
            return l1;
        ListNode* t1=l1,*t2=l2,*prev=NULL;
        while(t1!=NULL && t2!=NULL){
            if(t1->val<=t2->val){
                if(prev!=NULL){
                    prev->next=t1;
                }
                prev=t1;
                t1=t1->next;
            }
            else{
                if(prev!=NULL){
                    prev->next=t2;
                }
                prev=t2;
                t2=t2->next;
            }
        }
        if(t1==NULL)
            prev->next=t2;
        else
            prev->next=t1;
        return l1->val<=l2->val ? l1 : l2;
    }
    
    ListNode* mergeSort(vector<ListNode*> arr,int s,int e){
        if(s>e)
            return NULL;
        else if(s==e)
            return arr[s];
        int mid=(s+e)/2;
        ListNode *l1=mergeSort(arr,s,mid);
        ListNode *l2=mergeSort(arr,mid+1,e);
        return merge(l1,l2);
    }
    
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        return mergeSort(arr,0,arr.size()-1);
    }
};