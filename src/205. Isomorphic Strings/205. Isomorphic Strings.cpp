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
    bool isIsomorphic(string s, string t) {
        int i;
        while (i < s.size())
        {
            if(s.find(s[i]) != t.find(t[i]))
            {
                return false;
            }
            i++;
        }
        return true;
    }
};


int main()
{ 
    Solution S;
    clock_t startTime = clock();
    std::string a = "foo";
    std::string b = "bar";
    cout<<S.isIsomorphic(a,b)<<endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
