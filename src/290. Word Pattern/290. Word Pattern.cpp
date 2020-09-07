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
    bool wordPattern(string pattern, string str) {
        std::regex ws_re("\\s+");
        vector<string> v(sregex_token_iterator(str.begin(), str.end(), ws_re,-1), sregex_token_iterator());
        map<char,string> combine;
        map<char, string>::iterator it;
        if (pattern.size() != v.size())
        {
            return false;
        }
        for (int i = 0; i < pattern.size(); i++)
        {
            it = combine.find(pattern[i]);
            if (it == combine.end())
            {
                for (it = combine.begin(); it != combine.end(); it++)
                {
                    if (it->second == v[i])
                    {
                        return false;
                    }
                }
                combine.insert(pair(pattern[i], v[i]));
            }else
            {
                if (it->second != v[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{ 
    string pattern = "abba";
    string str = "dog dog dog dog ";
    Solution S;
    cout << S.wordPattern(pattern, str) << endl;
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
