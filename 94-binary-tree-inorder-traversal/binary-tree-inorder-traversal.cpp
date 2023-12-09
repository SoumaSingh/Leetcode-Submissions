/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> res;
       TreeNode* curr = root;
        TreeNode* pre;

        while (curr != nullptr) {
            if (curr->left == nullptr) {
                res.push_back(curr->val);
                curr = curr->right; // Move to the next right node
            } else { // Node has a left subtree
                pre = curr->left;

                // Find the rightmost node in the left subtree
                while (pre->right != nullptr) {
                    pre = pre->right;
                }

                // Make the current node as the right child of the rightmost node
                pre->right = curr;

                // Store the current node and move to its left child
                TreeNode* temp = curr;
                curr = curr->left;

                // Cut off the link to the left child to avoid infinite loops
                temp->left = nullptr;
            }
        }

        return res; 
    }
};