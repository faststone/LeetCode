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

//�ݹ�

class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers) {
        numbers[0] = numbers[0] + numbers[1];
        numbers[1] = numbers[0] - numbers[1];
        numbers[0] = numbers[0] - numbers[1];
        return numbers;
    }
};
int main()
{ 
    std::vector<float>resultSet;
    resultSet.push_back(1.2);
    resultSet.push_back(2.2);
    resultSet.push_back(3.2);
    resultSet.push_back(4.2);
    resultSet.push_back(0);
    resultSet.push_back(0);
    resultSet.push_back(0);
    int badPixNumber = std::count(resultSet.begin(), resultSet.end(), 0);
    vector<int> numbers = {769466698,1711112269};
    Solution S;
    S.swapNumbers(numbers);
 
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
