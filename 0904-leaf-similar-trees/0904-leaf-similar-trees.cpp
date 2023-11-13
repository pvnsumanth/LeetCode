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
    void leafs(vector<int> & v,TreeNode *node){
        if(!node)return;
        if(!node->right && !node->left) v.push_back(node->val);
        leafs(v,node->left);
        leafs(v,node->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        leafs(v1,root1);
        vector<int>v2;
        leafs(v2,root2);
        return v1==v2;
    }
};