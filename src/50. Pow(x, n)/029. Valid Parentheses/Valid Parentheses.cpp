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


bool isBadVersion(int version);

class Solution {
public:
    bool isValid(string s) {
        while (s.find("{}") != std::string::npos || s.find("[]") != std::string::npos || s.find("()") != std::string::npos)
        {
            if (s.find("{}") != std::string::npos)
            {
                s.replace(s.find("{}"), 2, "");
            }
            if (s.find("[]") != std::string::npos)
            {
                s.replace(s.find("[]"), 2, "");
            }
            if (s.find("()") != std::string::npos)
            {
                s.replace(s.find("()"), 2, "");
            }
        }
        return s.empty() == true ? true : false;
    }
};


int main()
{ 
    std::string str = "()[{}]{}";
    Solution S;
    bool flag = S.isValid(str);
    int target = 6;
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
