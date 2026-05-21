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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);

        if(root == NULL) {
            root = newNode;
            return root;
        }

        if(root->val < val){
            if(root->right) insertIntoBST(root->right, val);
            else root->right = newNode;
        }
        else{
            if(root->left) insertIntoBST(root->left, val);
            else root->left = newNode;
        }

        return root;
    }
};