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
    string defangIPaddr(string address) {
        int pos = address.find(".");
        while (pos != -1)
        {
            address.replace(pos, string(".").length(), "[.]");
            pos = address.find(".");
        }
        return address;
    }
};


int main()
{ 
    string address = "255.100.50.0";
    Solution S;
    S.defangIPaddr(address);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
