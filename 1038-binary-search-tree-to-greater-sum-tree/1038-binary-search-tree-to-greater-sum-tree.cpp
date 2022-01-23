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
    
    void check(TreeNode *root,int &value){
        if(root==NULL)
            return;
        check(root->right,value);
        root->val+=value;
        value=root->val;
        check(root->left,value);
        return;
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        int x=0;
        check(root,x);
        return root;
    }
};