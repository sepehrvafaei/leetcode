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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr){return{};}
        vector<TreeNode> S;
        vector<int> output;
        while(true){
            if(root!=nullptr){
                S.push_back(*root);
                root=root->left;
            }
            else{
                if(S.empty()){break;}
                root=&(S.back());
                S.pop_back();
                output.push_back(root->val);
                root=root->right;   
            }
        }
        return output;
    }
};
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
//Memory Usage: 8.7 MB, less than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
