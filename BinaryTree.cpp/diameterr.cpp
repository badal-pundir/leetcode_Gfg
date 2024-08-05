#include<iostream>
using namespace std;

int di = 0;
struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value) : value(value), left(nullptr), right(nullptr) {};
};

int diameter(TreeNode* root) {
    if(root == nullptr) {
        return 0;
    }

    int lh = diameter(root -> left);
    int rh = diameter(root -> right);
    di = max(di, (lh + rh));

    return max(rh, lh) + 1;
}

int main() {
    TreeNode* root =  new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> right -> left = new TreeNode(4);
    root -> right -> left -> left = new TreeNode(5);
    // root -> right -> left -> left -> left = new TreeNode(9);
    root -> right -> right = new TreeNode(6);
    // root -> right -> right -> right = new TreeNode(7);
    // root -> right -> right -> right -> right= new TreeNode(8);
    diameter(root);
    cout<< "Diameter of the tree is: " << di; 
    return 0;
}

