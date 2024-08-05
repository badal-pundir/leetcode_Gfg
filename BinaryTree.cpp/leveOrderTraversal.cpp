// Level Order Travesal / BFS(breadth-first traversal)
#include<iostream>
#include<queue>
#include<vector>
using namespace std;


// node 

struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value): value(value), left(nullptr), right(nullptr) {}
};

// level order or BFS traversal

void levelTraversal(TreeNode* root, vector<int>& bfs) {
    if(root == nullptr) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty())
    {
        TreeNode* current = q.front();
        q.pop();

        // pushing current node value into the vector bfs.
        bfs.push_back(current -> value);

        if(current -> left != nullptr) {
            q.push(current -> left);
        }

        if(current -> right != nullptr) {
            q.push(current -> right);
        }
    }
    

}
int main() {

    // inserting values in the tree
    vector<int> bfs;
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> right -> left = new TreeNode(7);

    levelTraversal(root, bfs);

    for(auto it : bfs) {
        cout<< it << " ";
    }
    return 0;
}