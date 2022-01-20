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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *node=new TreeNode(val);
        if(root==NULL)
            return node;
        TreeNode *current=root;
        while(true){
            if(val>current->val){
                if(current->right!=NULL)
                    current=current->right;
                else{
                    current->right=node;
                    break;
                }
            }
            else{
                if(current->left!=NULL)
                    current=current->left;
                else{
                    current->left=node;
                    break;
                }
            }
        }
        return root;
    }
};