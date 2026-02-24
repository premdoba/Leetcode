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
    int sumRootToLeaf(TreeNode* root) {
        vector<int> nums;
        preorder(root,"",nums);
        int ans = 0;
        for (int i : nums) {
            ans += i;
        }
        return ans;
    }
    void preorder (TreeNode* root,string s,vector<int>& nums) {
        if (root == NULL) 
            return;

        s += root->val + '0';

        if (root->left == NULL && root->right == NULL) {
            int p = binaryToInt(s);
            nums.push_back(p);
            cout << s << endl << p << endl;
            return;
        }

        preorder(root->left,s,nums);
        preorder(root->right,s,nums);

    }
    int binaryToInt (string s) {
        int ans = 0;
        int t = 2;
        int p = 0;
        for (int i=s.size()-1; i>=0; i--) {
            ans = ans + (pow(t,p)*(s[i]-'0'));
            p++;
        }
        return ans;
    }
};