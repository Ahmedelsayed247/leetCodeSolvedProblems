#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// pre-order --> root -> left ->right
// post-order --> left -> right->root

TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder)
{
    int preIndex = 0;
    int postIndex = 0 ;
    TreeNode* curr = new TreeNode(preorder[preIndex]);

    preIndex++;
    if(curr->val != postorder[postIndex])
    {
        curr->left = constructFromPrePost(preorder,postorder);
    }
    if(curr->val != postorder[postIndex])
    {
        curr->right = constructFromPrePost(preorder,postorder);
    }
    postIndex++ ;
    return curr;
}

int main()
{

}
