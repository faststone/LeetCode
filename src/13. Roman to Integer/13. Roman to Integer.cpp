#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <ctime>
#include <set>
#include <map>
#include <queue>
#include <unordered_map>
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

/*
class Solution {
public:
    string intToRoman(int num) {
        string rom;
        vector<string> str1 = { "M", "CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
        vector<int> valueV = { 1000,900,500,400,100, 90, 50,  40, 10,  9,   5,   4,  1 };
        while (num > 0)
        {
            for (int i = 0; i < str1.size(); i++)
            {
                if (num >= valueV[i])
                {
                    rom += str1[i];
                    num -= valueV[i];
                    break;
                }
            }
        }
        return rom;
    }
};
*/
//XLIX
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hMap = { {'I',1} , {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
        int r = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int val = hMap[s[i]];
            if (i < s.size() - 1 && hMap[s[i]] < hMap[s[i+1]])
            {
                r += hMap[s[i + 1]] - hMap[s[i]];
                i++;
            }
            else
                r += hMap[s[i]];
        }
        return r;

    }
};


int main()
{
    string s = "MCMXCIV";
    Solution S;
    cout << S.romanToInt(s) << endl;
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
