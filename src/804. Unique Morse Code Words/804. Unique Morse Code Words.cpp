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


using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string codes[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
        set<string> setStr;
        for (auto var:words)
        {
            string str;
            for (int i = 0; i < var.size(); i++)
            {
                str += codes[var[i] - 'a'];
            }
            setStr.emplace(str);
        }
        return setStr.size();
    }
};


int main()
{ 
    vector<string> str = {"gin","zen","gig","msg"};
    Solution S;
    cout << S.uniqueMorseRepresentations(str)<<endl;
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
