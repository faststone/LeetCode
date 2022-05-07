#include <iostream>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <ctime>
#include <set>
#include <map>
#include <queue>
#include <string>
 
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stackc;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c == '(' || c == '[' || c == '{')
            {
                stackc.push(c);
            }
            else
            {
                if (stackc.empty())
                {
                    return false;
                }
                char stacktop = stackc.top();
                stackc.pop();
                if (stacktop == '(' && c != ')')
                {
                    return false;
                }
                if (stacktop == '[' && c != ']')
                {
                    return false;
                }
                if (stacktop == '{' && c != '}')
                {
                    return false;
                }
            }
        }
        return stackc.empty();
    }
};
int main()
{ 
    Solution S;
    clock_t startTime = clock();
    string s = "()";
    int result = S.isValid(s);
    cout << result<<endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
