#include <iostream>
using namespace std;

struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value) : value(value), left(nullptr), right(nullptr) {};
};

class Solutioin
{
public:
    bool isBalanced(TreeNode* root)
    {
        return check(root) != -1;
    }

    int check(TreeNode* node)
    {
        if (node == nullptr)
            return 0;

        int lh = check(node->left);
        if(lh == -1) return -1;
        int rh = check(node->right);
        if(rh == -1) return -1;
        // if (lh == -1 || rh == -1)
        // {
        //     return -1;
        // }

        if (abs(lh - rh) > 1) return -1;
        
        return max(lh, rh) + 1;
    }   // TC ->  O(N), // SC -> O(N)
};
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(8);
    root->left->left->left->left = new TreeNode(9);
    Solutioin ob;
    if (ob.isBalanced(root))
    {
        cout << "Tree is balanced tree.";
    }
    else
    {
        cout << "Tree is unbalanced tree.";
    }
    return 0;
}