#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int size = nums.size();
        int added = 0;
        for (int i = 1; i < size; i++)
        {
            if (nums[i] == nums[added])
            {
                continue;
            }
            else
            {
                swap(nums[++added], nums[i]);
            }
        }
        return added + 1;
    }
};