**Using Two Stacks**
```
class Solution {
public:
vector<int> postorderTraversal(TreeNode* root) {
vector<int> ans;
if(root==NULL)
return ans;
stack<TreeNode*> st1;
stack<int> st2;
st1.push(root);
while(!st1.empty()){
root=st1.top();
st1.pop();
st2.push(root->val);
if(root->left)
st1.push(root->left);
if(root->right)
st1.push(root->right);
}
while(!st2.empty()){
ans.push_back(st2.top());
st2.pop();
}
return ans;
}
};
```