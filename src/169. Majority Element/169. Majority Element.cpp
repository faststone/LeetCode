#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <ctime>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>
#include <regex>
#include "ListNode.h"
#include "BinTree.h"
#include <unordered_map>
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
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> res;
        for (auto value:nums)
        {
            ++res[value];
            if (res[value] > (nums.size()/2) )
            {
                return value;
            }
        }
        return 0;
    }
};

int main()
{ 
    string pattern = "abba";
    string str = "dog dog dog dog ";
    Solution S;
    int n = 701;
    vector<int> nums = { 3,2,3 };
    cout << S.majorityElement(nums) << endl;
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
