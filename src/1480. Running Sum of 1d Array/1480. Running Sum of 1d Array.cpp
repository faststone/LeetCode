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
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                result.push_back(nums[i]);
            }
            else {
                result.push_back(result[i - 1] + nums[i]);
            }
        }
        return result;
    }
};

int main()
{ 
    vector<int> nums = { 1, 2, 3, 4 ,5 };
 
    Solution S;
    S.runningSum(nums);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
