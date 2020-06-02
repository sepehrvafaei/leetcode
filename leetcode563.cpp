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
#include<math.h>
class Solution {
public:
    int tilt=0;
    int help(TreeNode* ptr){
        if(ptr==nullptr){return 0;}
        int left=help(ptr->left);
        int right=help(ptr->right);
        tilt+=abs(left-right);
        return ptr->val+left+right;
    }
    int findTilt(TreeNode* root) {
        if(root==nullptr){return 0;}
        int left=help(root->left);
        int right=help(root->right);
        tilt+=abs(left-right);
        return tilt;
        
    }
};
