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
    bool testSubtree(TreeNode* root, TreeNode* subRoot) {
    if (root == nullptr && subRoot == nullptr) {
      return true;
    }

    if ((root && !subRoot) || (!root && subRoot)) {
      return false;
    }

    return root->val == subRoot->val &&
      testSubtree(root->left, subRoot->left) &&
      testSubtree(root->right, subRoot->right);
  }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr || subRoot == nullptr) {
      return false;
    }

    bool result = false;
    if (root->val == subRoot->val) {
      result = testSubtree(root, subRoot);
    }
    
    return result ||
      isSubtree(root->left, subRoot) ||
      isSubtree(root->right, subRoot);
        
        
    }
};
