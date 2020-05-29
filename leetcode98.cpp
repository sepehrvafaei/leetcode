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
#include<math.h>
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root==nullptr){return true;}
        vector<TreeNode> S;
        double temp=-INFINITY;
        while(true){
            if(root!=nullptr){
                S.push_back(*root);
                root=root->left;
            }
            else{
                if(S.empty()){break;}
                root=&(S.back());
                S.pop_back();
                if (root->val<=temp){return false;}
                temp=root->val;
                root=root->right;
                
            }
        }
        return true;
    }
};
