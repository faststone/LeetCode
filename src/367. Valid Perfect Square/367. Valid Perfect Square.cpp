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
#define INT_MAX 0x7FFFFFFF
#define INT_MIN 0x80000000
class Solution {
public:
    int divide(int dividend, int divisor) {
        int sum = divisor;
        int n = 0;
        while (sum < dividend)
        {
            sum += divisor;
            n++;
        }
        return n;
    }
};

int main()
{ 
    string pattern = "abba";
    string str = "dog dog dog dog ";
    Solution S;
    cout << S.divide(7,3) << endl;
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
