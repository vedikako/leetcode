class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode* n1, TreeNode* n2) {
        // both null → mirror
        if (n1 == NULL && n2 == NULL) return true;

        // one null → not mirror
        if (n1 == NULL || n2 == NULL) return false;

        // values must match + cross check
        return (n1->val == n2->val) &&
               isMirror(n1->left, n2->right) &&
               isMirror(n1->right, n2->left);
    }
};
