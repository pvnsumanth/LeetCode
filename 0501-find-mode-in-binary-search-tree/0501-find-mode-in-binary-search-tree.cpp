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
    void find(TreeNode* node,map<int,int> &hash){
        if(!node) return ;
        hash[node->val]++;
        find(node->left,hash);
        find(node->right,hash);
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int> hash;
        vector<int> result;
        find(root,hash);
        int max=INT_MIN;
        for(auto i:hash) if(i.second>max) max=i.second;
        for(auto i:hash) if(i.second==max) result.push_back(i.first);
        return result;
    }
};