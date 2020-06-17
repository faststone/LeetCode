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
    int climbStairs(int n) {

    }
};


int main()
{ 
    Solution S;
    int target = 6;

    deque<int> q = { 1 ,2};
    vector<int> str2 = {};

    TreeNode *root = initBintree(str2);

    clock_t startTime = clock();
    //S.removeDuplicates(str);
    //vector<int> str =
    vector<int> a = { 1, 2, 3, 4 };
    vector<int> b = { 2, 4, 5, 6 };
 
    std::cout << std::endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
