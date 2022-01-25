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
    
    int ans;
    
    int find(TreeNode *root,int k,int &cnt){
        if(root==NULL)
            return -1;
        int x=find(root->left,k,cnt);
        if(x!=-1)
            return x;
        if(cnt==k)
            return root->val;
        cnt++;
        return find(root->right,k,cnt);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int cnt=1;
        return find(root,k,cnt);
    }
};