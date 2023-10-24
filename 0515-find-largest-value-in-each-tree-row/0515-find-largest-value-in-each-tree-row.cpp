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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        vector<int>result;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int res=INT_MIN;
            for(int i=0;i<n;i++){
                res=max(res,q.front()->val);
                if(q.front()->right)q.push(q.front()->right);
                if(q.front()->left)q.push(q.front()->left);
                q.pop();
            }
            result.push_back(res);
        }
        return result;
    }
};