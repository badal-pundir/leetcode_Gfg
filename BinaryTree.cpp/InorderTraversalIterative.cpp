#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value): value(value), left(nullptr), right(nullptr){} 
};

vector<int> inorderTraversal(TreeNode* root) {
    // itrative approach for inorder traversal
    stack<TreeNode*> st;
    TreeNode* node = root;
    vector<int> inorder;

    while(true) {
        if(node != nullptr) {
            st.push(node);
            node = node -> left;
        }
        else {
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            inorder.push_back(node -> value);
            node = node -> right;
        }
    }
    return inorder;
}
int main() {
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);

    vector<int> nodeValues;
    nodeValues = inorderTraversal(root);

    for(auto it: nodeValues) {
        cout<< it << " "; 
    }

    return 0;
}