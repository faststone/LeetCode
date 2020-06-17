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
    vector<int> shuffle(vector<int>& nums, int n) {
        int* result = new int[nums.size()];
        int index = 0;
        for (int i = 0; i < n;i++)
        {
            result[index++] = (nums[i]);
            result[index++] = (nums[n + i]);
        }
        memcpy(&nums[0],result,nums.size()*sizeof(int));
        return nums;
    }
};


int main()
{ 
    vector<int> nums = { 2, 5, 1, 3, 4, 7 };
    int n = 3;
    Solution S;
    S.shuffle(nums, n);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
