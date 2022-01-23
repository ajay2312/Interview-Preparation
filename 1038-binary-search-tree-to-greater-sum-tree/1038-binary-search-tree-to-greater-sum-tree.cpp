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
    
    void inorder(TreeNode *root,vector<int> &a){
        if(root==NULL)
            return;
        inorder(root->left,a);
        a[root->val]=root->val;
        inorder(root->right,a);
    }
    
    void preorder(TreeNode *root,vector<int> b){
        if(root==NULL)
            return;
        root->val=b[root->val];
        preorder(root->left,b);
        preorder(root->right,b);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> a(101,0),b(101);
        inorder(root,a);
        b[100]=a[100];
        // for(int i=0;i<=100;i++)
        //     cout<<a[i]<<" ";
        for(int i=99;i>=0;i--)
            b[i]=a[i]+b[i+1];
        preorder(root,b);
        return root;
    }
};