class Solution {
public:

    bool same(TreeNode* root, TreeNode* subRoot){
        if(root == nullptr or subRoot == nullptr){
            return root == subRoot;
        }

        return same(root->left, subRoot->left) and same(root->right, subRoot->right) and root->val == subRoot->val;

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr or subRoot == nullptr){
            return root == subRoot;
        }

        if(root->val == subRoot->val and same(root, subRoot)) return true;

        return isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot);
    }
};
