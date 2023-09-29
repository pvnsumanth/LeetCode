/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool help(struct TreeNode* node,int s,int target){
    if(node==NULL){
        return false;
    }
    s+=node->val;
    if(node->left==NULL && node->right==NULL && s==target){
        return true;
    }
    return help(node->right,s,target) || help(node->left,s,target);

}
bool hasPathSum(struct TreeNode* root, int targetSum){
    return help(root,0,targetSum);
}