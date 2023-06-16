#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int v = -1, i = 0;
        int size = nums.size();
        for (i = 0; i < size; i++)
        {
            if (nums[i] == val && v == -1)
            {
                v = i;
            }
        }
    }
};