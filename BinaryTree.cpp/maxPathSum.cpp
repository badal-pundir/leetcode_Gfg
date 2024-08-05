#include<iostream>
#include<math.h>
using namespace std;


struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : value(value), left(nullptr), right(nullptr) {}
};

int maxSumPath(TreeNode* node, int &maxi) {
    if(node == nullptr) return 0;

    int lsum = max(0, maxSumPath(node -> left, maxi));
    int rsum = max(0, maxSumPath(node -> right, maxi));

    maxi = max(maxi, (lsum + rsum + node -> value));

    return ((node -> value) + max(lsum, rsum));
}
int main() {
    int maxi = 0;
    TreeNode* root = new TreeNode(15);
    root -> left = new TreeNode(10);
    root -> left -> left = new TreeNode(15);
    root -> right = new TreeNode(20);
    root -> right -> left = new TreeNode(-4);
    root -> right -> right = new TreeNode(-5);
    maxSumPath(root, maxi);
    cout<< "Max sum path: " << maxi;
    return 0;   
}