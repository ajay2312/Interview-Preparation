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
    
    vector<TreeNode*> ans;
    
    string find(TreeNode* root,unordered_map<string,int> &mp){
        if(root==NULL)
            return "";
        string str="L"+find(root->left,mp)+"M"+to_string(root->val)+"R"+find(root->right,mp);
        if(mp[str]==1){
            ans.push_back(root);
            cout<<str<<" ";
        }
        mp[str]++;
        return str;
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        ans.clear();
        unordered_map<string,int> mp;
        find(root,mp);
        return ans;
    }
};