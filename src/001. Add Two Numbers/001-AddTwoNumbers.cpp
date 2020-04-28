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

    string newStr = "1";
    string countAndSay(int n) {
        if (n == 1)
        {
            return newStr;
        }
        string last;
        string lastString = newStr;
        newStr.clear();
        int number = 1;
        for (int i = 0; i < lastString.size(); i++)
        {
            if ( i == lastString.size() -1 )
            {
                newStr += to_string(number);
                newStr += lastString[i];
            }
            else if (lastString[i] == lastString[i+1])
            {
                number++;
            }
            else
            {
                newStr += to_string(number);
                newStr += lastString[i];
                number = 1;
            }
        }
        return countAndSay(--n);
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
    std::cout << S.countAndSay(6);
//      for (int i = 0; i < str.size(); i++)
//      {
//          std::cout << str[i] << ' ";
//      }
    std::cout << std::endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
