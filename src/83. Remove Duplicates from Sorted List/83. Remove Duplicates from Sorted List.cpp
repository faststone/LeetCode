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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummyHead = new ListNode(0,head);
        ListNode* pre = dummyHead;
        while (pre->next != nullptr && pre->next->next != nullptr)
        {
            if (pre->next->val == pre->next->next->val)
            {
                pre->next = pre->next->next;
            }
            else
            {
                pre = pre->next;
            }
        }
        return dummyHead->next;
    }
};


int main()
{
    Solution S;
    vector<int> v = {1,3,5,6};
    int target = 7;
    ListNode* pNode1 = CreateListNode(1);
    ListNode* pNode2 = CreateListNode(1);
    ListNode* pNode3 = CreateListNode(2);
    ListNode* pNode4 = CreateListNode(3);
    ListNode* pNode5 = CreateListNode(3);

    ConnectListNodes(pNode1, pNode2);
    ConnectListNodes(pNode2, pNode3);
    ConnectListNodes(pNode3, pNode4);
    ConnectListNodes(pNode4, pNode5);

    ListNode *r = S.deleteDuplicates(pNode1);
    PrintListNode(r);
    clock_t startTime = clock();
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
