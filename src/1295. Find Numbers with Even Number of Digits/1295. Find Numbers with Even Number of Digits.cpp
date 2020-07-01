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
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i] >= 10 && nums[i] < 100) || (nums[i] >= 1000 && nums[i] < 10000) || nums[i] == 100000)
                cnt++;
        }
        return cnt;
    }
};

int main()
{
    vector<int> nums = { 555,901,482,1771};
    Solution S;
    cout << S.findNumbers(nums) << endl;

    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
