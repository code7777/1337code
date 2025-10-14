#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArrayLenK(vector<int>& nums, int k) {
        if (nums.size() < k) return 0; // or throw an error
        
        int currentSum = 0;
        // sum of first k elements
        for (int i = 0; i < k; i++)
            currentSum += nums[i];

        int maxSum = currentSum;

        // slide the window
        for (int i = k; i < nums.size(); i++) {
            currentSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
