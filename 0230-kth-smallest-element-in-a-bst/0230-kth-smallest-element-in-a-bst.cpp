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

     vector<int>ans;
  
    void inorder(TreeNode* root,int k){
       if(root==NULL) return;
        
            inorder(root->left,k);
            
           ans.push_back(root->val);
           
            
            inorder(root->right,k);
                
            
        
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);

        if(k>ans.size()) return -1;

        else{
            return ans[k-1];
        }
    }
};