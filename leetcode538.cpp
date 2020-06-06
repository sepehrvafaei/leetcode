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
    int sum=0;
public:
    void InOrder(TreeNode* ptr){
        if(ptr!=NULL){
            InOrder(ptr->right);
            ptr->val+=sum;
            sum=ptr->val;
            InOrder(ptr->left);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        sum=0;
        InOrder(root);
        return root;
    }
};
