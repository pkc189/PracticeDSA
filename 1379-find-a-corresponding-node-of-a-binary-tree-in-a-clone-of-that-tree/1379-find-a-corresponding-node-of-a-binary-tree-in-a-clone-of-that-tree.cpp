/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
  public:
    TreeNode * getTargetCopy(TreeNode * original, TreeNode * cloned, TreeNode * target) {

      return traverse(cloned, target);

    }

  TreeNode * traverse(TreeNode * cloned, TreeNode * target) {

    if (target == NULL)
      return NULL;
    if (cloned == NULL)
      return NULL;

    if (target -> val == cloned -> val) {

      return cloned;
    }

    TreeNode * right = traverse(cloned -> right, target);
    TreeNode * left = traverse(cloned -> left, target);

    return right ? right : left;

  }

};