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
    // vector<int> num_vec;
    stack< TreeNode*> node_stack;
    //helper for recursive method 
//     void inorder_T(TreeNode* root){
//         //basecase 
//         if(! root) return ; 
        
//         //inorder traversal: left, shout, right
//         if(root->left){
//             inorder_T(root->left);
//         }
//         num_vec.push_back(root->val);
//         if(root->right){
//             inorder_T(root->right);
//         }
//     }
    int kthSmallest(TreeNode* root, int k) {
        //recursive method
        // inorder_T(root);
        // return num_vec[k-1];
        
        //iterative method
        while(true){
            while(root){
                node_stack.push(root);
                root = root->left;
            }
            root = node_stack.top();
            node_stack.pop();
            if (--k==0) return root->val;
            root = root->right;
            
        }

    }
};
