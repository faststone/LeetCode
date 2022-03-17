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
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> nums;
        for (int i = 0, j = numbers.size() - 1; i < j;)
        {
            int sum = numbers[i] + numbers[j];
            if (sum == target){
                nums.push_back(i);
                nums.push_back(j);
                break;
                }
            else if(sum > target)
                j--;
            else
                i++;
        }
        return nums;
    }
};


int main()
{ 
    Solution S;
    clock_t startTime = clock();
    vector<int> nums={2,7,11,15};
    int target = 9;
    vector<int> result = S.twoSum(nums,target);
    cout << result[0] << result[1]<<endl;
    clock_t endTime = clock();
    cout << "sortName: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
