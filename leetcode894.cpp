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
    vector<TreeNode*> allPossibleFBT(int N) {
        if(N%2==0){return vector<TreeNode*>();}
        if(N==1){return {new TreeNode(0)};}
        vector<TreeNode*> output;
        for(int i=1;i<N;i+=2){
            for(const auto& l:allPossibleFBT(i)){
                for(const auto& r:allPossibleFBT(N-i-1)){
                    TreeNode* root=new TreeNode(0);
                    root->left=l;
                    root->right=r;
                    output.push_back(root);
                }
            }
        }
        return output;
    }
};
