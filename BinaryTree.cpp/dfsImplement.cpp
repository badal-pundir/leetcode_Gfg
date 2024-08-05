#include<iostream>
using namespace std;

struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val): value(val), left(nullptr), right(nullptr) {}
};

// Preorder Traversal
void preorder(TreeNode* root) {
    if(root == nullptr) return;
    cout<< root->value <<" ";
    preorder(root -> left);
    preorder(root -> right);
}

// Inorder Traversal
void inorder(TreeNode* root) {
    if(root == nullptr) return;
    inorder(root -> left);
    cout<< root->value <<" ";
    inorder(root -> right);
}

// Postorder Traversal
void postorder(TreeNode* root) {
    if(root == nullptr) return;

    postorder(root ->left);
    postorder(root ->right);
    cout<< root -> value << " ";
    // postorder(root ->left);

}
int main() {
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;
    
    return 0;
}