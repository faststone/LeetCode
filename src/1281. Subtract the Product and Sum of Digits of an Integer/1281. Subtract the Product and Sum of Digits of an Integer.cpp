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
    int subtractProductAndSum(int n) {
        std::string s = to_string(n);
        int sum1 = 1;
        int sum2 = 0;
        for (int i = 0; i < s.size();i++)
        {
            int value = s[i] -'0';
            sum1 *= value;
            sum2 += value;
        }
        return sum1 - sum2;
    }
};

int main()
{ 
    vector<int> nums = { 2,3,5,1,3 };
    int value = 4421;
    Solution S;
    S.subtractProductAndSum(value);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
