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
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> result;
        vector<int> singal;
        for (int i = 0; i < n; i++) 
        {
            for (int j = n-1; j >= 0; j--)
            {
                singal.push_back(matrix[j][i]);
            }
            result.push_back(singal);
            singal.clear();
        }
        matrix.assign(result.begin(), result.end());
    }
};


int main()
{ 
    vector<vector<int>> matrix = { {1, 2, 3},{4, 5, 6},{7, 8, 9}};
 
    Solution S;
    S.rotate(matrix);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
