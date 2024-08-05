#include<iostream>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value): value(value), left(nullptr), right(nullptr){} 
};

class Solution {
    public:
        int  maxDepth(TreeNode* root) {
            if(root == NULL) return 0;

            int lh = maxDepth(root -> left);
            int rh = maxDepth(root -> right);

            return 1 + max(lh, rh);
        }
};

int main() {
    Solution ob;
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);
    cout<< ob.maxDepth(root);

    return 0;
}