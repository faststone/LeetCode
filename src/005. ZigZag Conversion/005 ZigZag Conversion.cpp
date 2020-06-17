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
    string convert(string s, int numRows) {
        int n = numRows * 2 - 2;
        string str;
        for (int i = 0; i < s.size();i += n)
        {
            vector<char> t;
            for (int j = 0; j < n; j++)
            {
                str +
            }
        }
    }
};


int main()
{ 
    string s = "PAYPALISHIRING";
    int numRows = 3;
    Solution S;
    S.convert(s, numRows);
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
