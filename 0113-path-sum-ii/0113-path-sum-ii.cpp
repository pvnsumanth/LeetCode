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
    void cal(TreeNode* node,int &sum,vector<int>&v,vector<vector<int>> &res,int target){
        if(!node)return;
        sum+=node->val;
        v.push_back(node->val);
        if(sum==target && !node->right && !node->left) res.push_back(v);
        cal(node->left,sum,v,res,target);
        cal(node->right,sum,v,res,target);
        sum-=node->val;
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        vector<int>v;
        vector<vector<int>>res;
        cal(root,sum,v,res,targetSum);
        return res;
    }
};