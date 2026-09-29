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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> re;
        vector<int> l;
        vector<int> r;

        if(root == NULL){
            return re;
        }   

        l = postorderTraversal(root->left);
        r = postorderTraversal(root->right);

        
        re.insert(re.end(),l.begin(),l.end());
        re.insert(re.end(),r.begin(),r.end());
        re.push_back(root->val);
        return re;
    }
};