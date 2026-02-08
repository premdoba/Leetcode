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
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;
        bool c = false;
        int l = getHeight(root->left,0,c);
        int r = getHeight(root->right,0,c);
        if (c == true)
            return false;
        return abs(l-r) <= 1;
    }
    int getHeight (TreeNode* root,int count,bool& check) {
        if (root == NULL)
            return count;
        int l = getHeight(root->left,count,check);
        int r = getHeight(root->right,count,check);
        if (abs(l-r) > 1) {
            check = true;
            return -1;
        }
        else {
            return max(l,r)+ 1;
        }
    }
};