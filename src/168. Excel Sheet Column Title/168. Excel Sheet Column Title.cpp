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

class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        while (n > 0)
        {
            int m = n % 26;
            if (m == 0)
            {
                m = 26;
            }
            s = (char)(m + 64) + s;
            n = (n - m) / 26;
        }
        return s;
    }
};

int main()
{ 
    string pattern = "abba";
    string str = "dog dog dog dog ";
    Solution S;
    int n = 701;
    cout << S.convertToTitle(n) << endl;
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
