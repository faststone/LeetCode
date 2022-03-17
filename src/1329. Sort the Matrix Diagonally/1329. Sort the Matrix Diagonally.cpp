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

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<vector<int>> result;
        int m = mat.size();
        int n = mat[0].size();
        for ()
        {
        }
        return result;
    }
};

int main()
{
    vector<vector<int>> nums;
    vector<int> index1 = { 3,3,1,1 };
    vector<int> index2 = { 2,2,1,2 };
    vector<int> index3 = { 1,1,1,2 };
    nums.push_back(index1);
    nums.push_back(index2);
    nums.push_back(index3);

    double x = 2.0;
    int n = 12;
    Solution S;
    S.diagonalSort(nums);

    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
