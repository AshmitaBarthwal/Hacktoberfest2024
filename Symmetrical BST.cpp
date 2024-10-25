#include <iostream>
using namespace std;

/*struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};*/

class SymmetricalBST 
{
public:
    bool areSymmetrical(TreeNode* root1, TreeNode* root2) 
{
        if (root1 == nullptr && root2 == nullptr) 
        {
            return true;
        }
  
        if (root1 == nullptr || root2 == nullptr) 
        {
            return false;
        }
  
        return (root1->data == root2->data) && areSymmetrical(root1->left, root2->right) && areSymmetrical(root1->right, root2->left);
    }
};
