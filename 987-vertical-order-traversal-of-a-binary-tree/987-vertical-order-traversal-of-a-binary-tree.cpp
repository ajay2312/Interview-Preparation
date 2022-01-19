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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> mp;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            root=p.first;
            int x=p.second.first,y=p.second.second;
            mp[x][y].insert(root->val);
            if(root->left)
                q.push({root->left,{x-1,y+1}});
            if(root->right)
                q.push({root->right,{x+1,y+1}});
        }
        for(auto s1 : mp){
            auto s2=s1.second;
            vector<int> v;
            for(auto s3:s2){
                for(auto it=s3.second.begin();it!=s3.second.end();it++)
                    v.push_back(*it);
            }
            ans.push_back(v);
        }
        return ans;
    }
};