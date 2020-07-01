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
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        int lastIndex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            target.insert(target.begin() + index[i], nums[i]);
        }
        return target;
    }
};

int main()
{ 
    vector<int> nums = { 0,1,2,3,4 };
    vector<int> index = { 0,1,2,2,1 };
 
    Solution S;
    S.createTargetArray(nums,index);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
