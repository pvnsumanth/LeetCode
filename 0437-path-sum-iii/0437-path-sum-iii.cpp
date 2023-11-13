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
    void check(TreeNode * node,int target,int &count,map<long,int> &hash,long &sum){
        if(!node) return;
        sum+=node->val;
        if(hash.find(sum-target)!=hash.end())count+=hash[sum-target];
        hash[sum]++;
        check(node->left,target,count,hash,sum);
        check(node->right,target,count,hash,sum);
        hash[sum]--;
        sum-=node->val;
        
    }
    int pathSum(TreeNode* root, int targetSum) {
        map<long,int>hash;
        hash[0]++;
        int count=0;
        long sum=0;
        check(root,targetSum,count,hash,sum);
        return count;
    }
};