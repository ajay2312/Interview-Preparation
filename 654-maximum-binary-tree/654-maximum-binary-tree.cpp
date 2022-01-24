/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int find(vector<int> arr,int low,int high){
        int maxindex=low;
        for(int i=low+1;i<=high;i++){
            if(arr[i]>arr[maxindex])
                maxindex=i;
        }
        return maxindex;
    }
    
    TreeNode* construct(vector<int> arr,int low,int high){
        if(low>high)
            return NULL;
        int index=find(arr,low,high);
        TreeNode* root=new TreeNode(arr[index]);
        root->left=construct(arr,low,index-1);
        root->right=construct(arr,index+1,high);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums,0,nums.size()-1);
    }
};