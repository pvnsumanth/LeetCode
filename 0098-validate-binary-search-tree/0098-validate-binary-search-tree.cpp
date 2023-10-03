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
    bool check(TreeNode* node,long max,long min){
        if(!node) return true;
        if((node->val>min && node->val<max) && 
            (check(node->right,max,node->val)&&
            check(node->left,node->val,min))) return true;
        else return false;
    }
    bool isValidBST(TreeNode* root) {
        return check(root,LONG_MAX,LONG_MIN);
    }
};