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
class Solution {
public:
    void solve(TreeNode* root, int &cnt, int &ans, int k){
        if(root == NULL)    return;
        //left, root, right 
        solve(root->left, cnt, ans, k);
        cnt++;
        if(cnt == k){
            ans = root->val;
            return;
        }
        solve(root->right, cnt, ans, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        int cnt = 0;        
        int ans;
        solve(root, cnt, ans, k);
        return ans;
    }
};
        if(k>ans.size()) return -1;

        else{
            return ans[k-1];
        }
    }
};