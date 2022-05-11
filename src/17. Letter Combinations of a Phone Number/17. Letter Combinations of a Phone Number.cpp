#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <ctime>
#include <set>
#include <queue>
#include <unordered_map>

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
    void backtracking(queue<string> strv, vector<string> &returnStr)
    {
        if (strv.empty())
        {
            return;
        }
        string str = strv.front();
        strv.pop();
        if (returnStr.empty())
        {
            for (int i = 0; i < str.size(); i++)
            {
                string s(1,str[i]);
                returnStr.push_back(s);
            }
        }
        else 
        {
            vector<string> rebuildStr;
            for (int i = 0; i < str.size(); i++)
            {
                for (auto var:returnStr)
                {
                    rebuildStr.push_back(var + str[i]);
                }
            }
            returnStr = rebuildStr;
        }
        backtracking(strv, returnStr);
    }
    vector<string> letterCombinations(string digits) {
        vector<string> returnStr;
        queue<string> strv;
        unordered_map<char, string>hMap = {
            {'2', "abc"},{'3',"def"}, {'4',"ghi"}, {'5',"jkl"},
            {'6',"mno"}, {'7',"pqrs"},{'8',"tuv"},
            {'9',"wxyz"} };
        for (int i = 0; i < digits.size(); i++)
        {
            strv.push(hMap[digits[i]]);
        }
        backtracking(strv, returnStr);
        return returnStr;
    }
};

int main()
{
    string str = "2349";
    Solution S;
    vector<string> v = S.letterCombinations(str);
    for (auto var:v)
    {
        cout << var << endl;
    }
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
