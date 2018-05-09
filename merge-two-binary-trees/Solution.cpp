class Solution {
public:
  TreeNode *mergeTrees(TreeNode *node_1, TreeNode *node_2) {
    if (node_1 && node_2) {
      node_1->val += node_2->val;
      node_1->left = mergeTrees(node_1->left, node_2->left);
      node_1->right = mergeTrees(node_1->right, node_2->right);

      return node_1;
    }
    
    return node_1 ? node_1 : node_2;
  }
};
