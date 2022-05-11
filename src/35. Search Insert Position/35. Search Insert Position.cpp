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
#include "BSTTree.h"
 
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
    int searchInsert(vector<int>& nums, int target) {
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int i = 0;
        for (auto var: nums)
        {
            if (var == target)
            {
                return i;
            }
            i++;
        }
    }
};


int main()
{
    Solution S;
    vector<int> v = {1,3,5,6};
    int target = 7;
    int r = S.searchInsert(v, target);
    cout << r << endl;
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
