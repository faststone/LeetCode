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
    string intToRoman(int num) {
        string rom;
        vector<string> str1 = { "M", "CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
        vector<int> valueV = { 1000,900,500,400,  100, 90, 50,  40, 10,  9,   5,   4,  1 };
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


int main()
{
    vector<int> price = { 7, 1, 5, 3, 6, 4 };
    vector<int> price2 = { 7,6,4,3,1 };
    int num = 1994;
    int num2 = 58;
    Solution S;
    cout << S.intToRoman(num) << endl;
    cout << S.intToRoman(num2) << endl;
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
