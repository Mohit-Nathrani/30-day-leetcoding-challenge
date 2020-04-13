/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int cal(TreeNode* root, int &h){
        if(root==NULL){
            h=0;
            return 0;
        }
        
        int lh=0, rh=0;
        int ld=cal(root->left, lh); 
        int rd=cal(root->right, rh);
        
        h = max(lh, rh)+1;
        return max(lh+rh+1, max(ld, rd));
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int h;
        return cal(root, h)-1;
        
    }
};