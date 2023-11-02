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
    void sumandcount(TreeNode *node,pair<int,int> &p){
        if(!node) return ;
        p.first+=node->val;
        p.second++;
        sumandcount(node->left,p);
        sumandcount(node->right,p);
    }
    void count(TreeNode *node,int &res){
        if(!node) return ;
        pair<int,int> p;
        sumandcount(node,p);
        if(p.first/p.second==node->val)res++;
        count(node->left,res);
        count(node->right,res);
    }
    int averageOfSubtree(TreeNode* root) {
        int result=0;
        count(root,result);
        return result;
    }
};