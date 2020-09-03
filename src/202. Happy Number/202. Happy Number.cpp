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
    bool isHappy(int n)
    {
        int num = 0;
        for (int i = 0; i < 100; i++)
        {
            while (n > 0)
            {
                num += pow(n % 10, 2);
                n = n / 10;
            }
            n = num;
            num = 0;
            if (n == 1)
            {
                return true;
            }
        }
        return false;
    }
};


int main()
{ 
    Solution S;
    uint32_t n = 19;
    clock_t startTime = clock();
    bool r = S.isHappy(n);
    std::cout << r <<std::endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
