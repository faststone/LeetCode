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
    int removeElement(vector<int>& nums, int val) {

    }
};

int main()
{ 
    string pattern = "abba";
    string str = "dog dog dog dog ";
    Solution S;
    int n = 701;
    vector<int> nums = { 3,2,3,3 };
    int val = 3;
    cout << S.removeElement(nums,val) << endl;
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
