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
    int game(vector<int>& guess, vector<int>& answer) {
        int cnt = 0;
        for (int i = 0; i < guess.size(); i++) 
        {
            if (guess[i] == answer[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};


int main()
{ 
    vector<int> guess = { 1, 2, 3 };
    vector<int> answer = { 3, 2, 1 };
    Solution S;
    S.game(guess, answer);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
