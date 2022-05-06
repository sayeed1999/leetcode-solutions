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
    TreeNode* searchBST(TreeNode* head, int val) {
        if(head==NULL) return NULL;

        if(head->val==val){ return head; }
    
        TreeNode* subtree = NULL;
        if(val < head->val)
        {
            subtree = searchBST(head->left, val);
        }
        else if(val > head->val)
        {
            subtree = searchBST(head->right, val);
        }
        return subtree;
    }
};