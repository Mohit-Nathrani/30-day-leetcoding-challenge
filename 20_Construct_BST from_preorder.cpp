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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        stack<TreeNode*> st;
        TreeNode *root= new TreeNode(preorder[0]);
        st.push(root);
        
        TreeNode* temp;
        for(int i=1;i<n;i++){
            temp=NULL;
            while(!st.empty() && preorder[i]>st.top()->val){
                temp = st.top();
                st.pop();
            }
            
            if(temp!=NULL)  {  
                temp->right = new TreeNode(preorder[i]);  
                st.push(temp->right);  
            }
            else{
                st.top()->left = new TreeNode(preorder[i]);
                st.push(st.top()->left);
            }
        }
        return root;
    }
};