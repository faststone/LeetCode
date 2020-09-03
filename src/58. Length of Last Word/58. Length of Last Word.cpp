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
    int lengthOfLastWord(string s) {
        int num = 0;
        if (!s.empty())
        {
            s.erase(s.find_last_not_of(" ") + 1);
        }
        int size_num = s.size();
        for (int i = 0; i < size_num; i++)
        {
            if (s[size_num-i-1] == ' ')
            {
                break;
            }
            num++;
        }
        return num;
    }
};


int main()
{ 
    Solution S;
    std::string  n = "h ";
    clock_t startTime = clock();
    int r = S.lengthOfLastWord(n);
    std::cout << r <<std::endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
