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
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.size();i++)
        {
            if (nums[i] != val)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main()
{ 
    Solution S;
    clock_t startTime = clock();
    vector<int> nums={3,2,2,3};
    int target = 3;
    int result = S.removeElement(nums,target);
    cout << result<<"nums"<<nums[0]<<nums[1]<<endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
