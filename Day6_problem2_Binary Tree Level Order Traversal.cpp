/*102. Binary Tree Level Order Traversal
Medium

11409

215

Add to List

Share
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000*/


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
#include<queue>
class Solution {
public:
    void helper(TreeNode* root,int d, vector<vector<int>>& v){
        if(root==NULL)
            return;
        if(v.size()==d)
            v.push_back({});
        v[d].push_back(root->val);
        helper(root->left,d+1,v);
        helper(root->right,d+1,v);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        /*vector<vector<int>> v;
        queue<int> q;
        q.push(root);
        int j=0,i=0;
        v[i][j].push_back(root->val);
        while(!q.empty()){
            Node<int>* f=q.front();
            q.pop();
            bool inc=false;
            j=0;
            if(f->left!=NULL){
                i++;
                inc=true;
                v[i][j].push_back(f->left->val);
                q.push(f->left);
                j++;
            }
            if(f->right!=NULL){
                if(!inc)
                    i++;
                v[i][j].push_back(f->right->val);
                q.push(f->right);
                //j++;
            }
        }
        return v;*/
        vector<vector<int>> v;
        helper(root, 0, v);
        return v;
    }
};
