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
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1)
        {
            return 0;
        }
        int maxValue = 0;
        int minValue = prices[0];
        for (int i = 1; i < prices.size();i++)
        {
            maxValue = max(maxValue, prices[i] - minValue);
            minValue = min(minValue, prices[i]);
        }
        return maxValue;
    }
};


int main()
{ 
    vector<int> price = { 7, 1, 5, 3, 6, 4 };
    vector<int> price2 = { 7,6,4,3,1 };
    Solution S;
    cout << S.maxProfit(price)<< endl;
    cout << S.maxProfit(price2) << endl;
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
