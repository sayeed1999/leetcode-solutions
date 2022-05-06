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
    vector<int> ret;
        
    void travel(TreeNode* node) {
        if(node->left != NULL) {
            travel(node->left);
        }
        ret.emplace_back(node->val);
        if(node->right != NULL) {
            travel(node->right);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL) {
            return ret;
        }
        
        travel(root);
        
        return ret;
    }
};