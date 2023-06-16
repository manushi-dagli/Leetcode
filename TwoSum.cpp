#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> marked;
        for (int i = 0; i < nums.size(); i++)
        {
            if (marked.count(target - nums[i]))
            {
                return {marked[target - nums[i]], i};
            }
            marked[nums[i]] = i;
        }
        return {};
    }
};