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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         if(preorder.size()==0 ){
//             return nullptr ;
//         }
//         TreeNode* root = new TreeNode(preorder[0]); //root is the first node of preordrer traversla
//         int idx_root = find(inorder.begin(),inorder.end(),preorder[0])-inorder.begin();

//         vector<int> preorder_left (preorder.begin()+1,preorder.begin()+1+idx_root);
//         vector<int> inorder_left (inorder.begin(),inorder.begin()+idx_root);
//         vector<int> preorder_right (preorder.begin()+idx_root+1,preorder.end());
//         vector<int> inorder_right (inorder.begin()+idx_root+1,inorder.end());

//         TreeNode* left_tree = buildTree(preorder_left,inorder_left);
//         TreeNode* right_tree = buildTree(preorder_right,inorder_right);
//         root->left = left_tree;
//         root->right = right_tree;
//         return root;
        //method2: use helper function, save space 
        return buildTreehelper(preorder,inorder,0,preorder.size(),0,inorder.size());
    }
    
    TreeNode* buildTreehelper(vector<int>& preorder, vector<int>& inorder,int bp, int ep, int bi, int ei){
        if(bp==ep ){
            return nullptr ;
        }
        TreeNode* root = new TreeNode(preorder[bp]); //root is the first node of preordrer traversla
        int idx_root = find(inorder.begin()+bi,inorder.begin()+ei,preorder[bp])-inorder.begin()-bi;
        root->left = buildTreehelper(preorder,inorder,bp+1,bp+1+idx_root,bi,bi+idx_root);
        root->right = buildTreehelper(preorder,inorder,bp+1+idx_root,ep,bi+1+idx_root,ei);
               
        return root;
    }
};
