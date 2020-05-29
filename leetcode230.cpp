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
    int kthSmallest(TreeNode* root, int k) {
        vector<TreeNode> S;
        int count=0;
        int wanted =0;
        while(true){
            if(root!=nullptr){
                S.push_back(*root);
                root=root->left;
            }
            else{
                if(S.empty()){break;}
                root=&(S.back());
                S.pop_back();
                count+=1;
                if (count==k){wanted=root->val;break;}
                root=root->right;
                
            }
        }
        return wanted;
    }
};
//Runtime: 20 ms, faster than 95.12% of C++ online submissions for Kth Smallest Element in a BST.
//Memory Usage: 24.2 MB, less than 6.67% of C++ online submissions for Kth Smallest Element in a BST.
