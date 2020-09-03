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
    int hammingWeight(uint32_t n) {
        std::string str = std::to_string(n);
        int r = 0;
        while (n)
        {
            r += n & 1;
            n = n >> 1;
        }
        return r;
    }
};


int main()
{ 
    Solution S;
    uint32_t n = 00000000000000000000000010000000;
    clock_t startTime = clock();
    int r = S.hammingWeight(n);
    std::cout << r <<std::endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
