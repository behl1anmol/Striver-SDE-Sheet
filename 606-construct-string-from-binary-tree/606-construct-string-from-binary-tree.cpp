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
    string tree2str(TreeNode* root) {
        
        if(root==NULL){
            cout<<"inside"<<endl;
            return "";
        }
        string ans = std::to_string(root->val);
        
        string left = tree2str(root->left);
        if(left=="" && root->right) ans+="()";
        if(root->left) ans+= "(" + left + ")";
        //ans += ")";
            
        string right = tree2str(root->right);
        
        if(right!="") ans += "(" + right + ")";
        
        return ans;
        
    }
};