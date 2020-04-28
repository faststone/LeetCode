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

class Solution {
public:
    bool isPalindrome(string s) {
        bool flag = true;
        std::vector<char> strV;
        for (int i = 0; i< s.size();i++)
        {
            if ( (s[i] >= '0' && s[i] <= '9' ) || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            {
                if ((s[i] >= 'a' && s[i] <= 'z'))
                {
                    strV.push_back(s[i] - 32);
                }
                else {
                    strV.push_back(s[i]);
                }
            }
        }
        int size = strV.size();
        for (int i = 0; i < size /2;i++)
        {
            if (strV[i] != strV[size-i-1])
            {
                flag = false;
            }
        }
        return flag;
    }
};


int main()
{
    std::string str = "A man, a plan, a canal: Panama";
    std::string str2 = "race a car";
    Solution S;
    bool flag1 = S.isPalindrome(str);
    cout << "flag1=" << flag1 << endl;
    bool flag2 = S.isPalindrome(str2);
    cout << "flag2=" << flag2 << endl;
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
