// Leetcode - Two Sum
// Given an array of integers nums and an integer target, 
// return indices of the two numbers
// such that they add up to target.

#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        result.push_back(0);
        result.push_back(0);
        return result;
    }
};