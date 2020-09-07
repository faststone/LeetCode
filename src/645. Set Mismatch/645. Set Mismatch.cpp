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
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sumSquence = nums.size() * (nums.size() + 1) / 2;
        int sumOri = accumulate(nums.begin(), nums.end(), 0);
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int sumAft = accumulate(nums.begin(), nums.end(), 0);
        nums.clear();
        nums.push_back(sumOri-sumAft);
        nums.push_back(sumSquence - sumAft);
        return nums;
    }
};


int main()
{ 
    vector<int> guess = { 1,2,2,4 };
    vector<int> answer = { 3, 2, 1 };
    Solution S;
    S.findErrorNums(guess);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
