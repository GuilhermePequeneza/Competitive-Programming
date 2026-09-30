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
        //eRd
        if(root == NULL){
            return {};
        }
        vector<int> ans;
        vector<int> l;
        vector<int> r;        
        l = inorderTraversal(root->left);        
        r = inorderTraversal(root->right);

        ans.insert(ans.end(),l.begin(),l.end());
        ans.push_back(root->val);
        ans.insert(ans.end(),r.begin(),r.end());

        return ans;
    }
};