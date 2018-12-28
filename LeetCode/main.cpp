#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <ctime>
#include <set>
#include <map>
#include <queue>
#include "ListNode.h"
#include "BinTree.h"
 
using namespace std;
#define null 0
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/


bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int midIndex = 0;
        while (low <= high)
        {
            midIndex = low + (high - low) / 2;
            if (isBadVersion(midIndex))
            {
                high = midIndex - 1;
            }
            else
            {
                low = midIndex + 1;
            }
        }
        return low;
    }
};
// class Solution {
// public:
//     bool isValidBST(TreeNode *root) {
//         return isValidBST(root, LONG_MIN, LONG_MAX);
//     }
//     bool isValidBST(TreeNode *root, long mn, long mx) {
//         if (!root) return true;
//         if (root->val <= mn || root->val >= mx) return false;
//         return isValidBST(root->left, mn, root->val) && isValidBST(root->right, root->val, mx);
//     }
// };

int main()
{ 
    Solution S;
    int target = 6;

    deque<int> q = { 1 ,2};
    vector<int> str2 = {};

    TreeNode *root = initBintree(str2);

    clock_t startTime = clock();
    //S.removeDuplicates(str);
    //vector<int> str =
    vector<int> a = { 1, 2, 3, 4 };
    vector<int> b = { 2, 4, 5, 6 };
    S.firstBadVersion(5);
//      for (int i = 0; i < str.size(); i++)
//      {
//          std::cout << str[i] << ' ";
//      }
    std::cout << std::endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}

