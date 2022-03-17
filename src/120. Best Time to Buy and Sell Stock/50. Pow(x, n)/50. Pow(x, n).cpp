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
    double myPow(double x, long long n) {
        if (n == 0)
        {
            return 1;
        }
        if (n < 0)
        {
            myPow(x, -n);
        }
        double mid = myPow(x, n / 2);
        if (n & 1)
            return x * mid * mid;
        return mid * mid;
    }
};

int main()
{
    vector<int> nums = { 0,1,2,3,4 };
    vector<int> index = { 0,1,2,2,1 };
    double x = 2.0;
    int n = 12;
    Solution S;
    cout << S.myPow(x, n) << endl;

    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
