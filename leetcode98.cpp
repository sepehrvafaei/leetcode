//recursive aproach
/*
#include<math.h>
class Solution {
public:
    bool helper(TreeNode* root,double min,double max){
        if(root==nullptr){return true;}
        return (root->val>min && root->val<max &&
                (root->left==nullptr||helper(root->left,min,root->val)) && 
                (root->right==nullptr||helper(root->right,root->val,max)));
    }
    bool isValidBST(TreeNode* root) {
        return helper(root,-INFINITY,INFINITY);
    }
};
*/
//iterative using stack(faster)
//time complexity:O(v)
//space complexity:O(h)
