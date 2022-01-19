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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> q;
        int ltr=1;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> v(size);
            for(int i=0;i<size;i++){
                root=q.front();
                q.pop();
                int index=ltr ? i : (size-1-i);
                v[index]=root->val;
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            ltr=!ltr;
            ans.push_back(v);
        }
        return ans;
    }
};