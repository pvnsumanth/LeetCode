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
    void count(TreeNode *node,int &ct,int maxi){
        if(!node) return;
        maxi=max(maxi,node->val);
        ct+=maxi<=node->val;
        count(node->left,ct,maxi);
        count(node->right,ct,maxi);
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int ct=0;
        int maxi=root->val;
        count(root,ct,maxi);
        return ct;
    }
};