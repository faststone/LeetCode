#include <vector>
#include <queue>
#include <iostream>
using namespace std;
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* initBintree(vector<int> element)
{
    if ( !element.size() > 0)
    {
        return NULL;
    }
    TreeNode **nodes = new TreeNode *[element.size()];
    for (int i = 0; i < element.size();i++)
    {
        if (element[i] == 0)
        {
            nodes[i] = NULL;
        }
        else
        {
            nodes[i] = new TreeNode(element[i]);
        }
    }
    queue<TreeNode*> nodeQueue;
    nodeQueue.push(nodes[0]);

    int index = 1;
    TreeNode* node;
    while (index < element.size())
    {
        node = nodeQueue.front();
        nodeQueue.pop();
        nodeQueue.push(nodes[index++]);
        node->left = nodeQueue.back();
        nodeQueue.push(nodes[index++]);
        node->right = nodeQueue.back();
    }
    return nodes[0];
}
