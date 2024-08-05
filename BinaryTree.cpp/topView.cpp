c
#include<vector>
#include <map>
using namespace std;

struct TreeNode
{
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : value(value), left(nullptr), right(nullptr) {}
};

void leftTopView(TreeNode* node, map<int, vector<int>>& mymap, int &v)
{   
    // if(node) {
    //      mymap[v].push_back(node -> value); 
    // }
    if(node -> left){
        node = node -> left;
        v--;
        mymap[v].push_back(node -> value);
        leftTopView(node, mymap, v);
        }
    else if(node -> right) {
        node = node -> right;
        v++;
        mymap[v].push_back(node -> value);
        leftTopView(node, mymap, v);
    }
    return;
}
void rightTopView(TreeNode* node, map<int, vector<int>>& mymap, int &v)
{
    // if(node) {
    //     mymap[v].push_back(node-> value);
    // }
    if(node -> right){
        node = node -> right;
        v++;
        mymap[v].push_back(node -> value);
        rightTopView(node , mymap, v);
        }
    else if(node -> left) {
        node = node -> left;
        v--;
        mymap[v].push_back(node -> value);
        rightTopView(node , mymap, v);
    }
    return;
}
int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right ->left= new TreeNode(17);
    root->right->right ->left -> left= new TreeNode(18);

    root->left->left->left = new TreeNode(8);
    root->left->left->left->left = new TreeNode(9);

    map<int, vector<int>> mymap;
    int v = 0;
    mymap[0].push_back(root -> value);
    rightTopView(root, mymap, v);
    leftTopView(root, mymap, v = 0);
    for(const auto& pair:  mymap) {
        if (!pair.second.empty())
        {
            cout<< pair.second[0] << " ";
        }
        else cout<< pair.first<<"vector is empty";
    }
    for (const auto& pair : mymap) {
        cout << "\nKey: " << pair.first << " Value: ";
        for (const int& value : pair.second) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}