#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int z = x;
        stack<int> s;
        while (x)
        {
            s.push(x % 10);
            x /= 10;
        }
        while (z)
        {
            if (s.top() != z % 10)
            {
                return false;
            }
            z /= 10;
            s.pop();
        }
        return true;
    }
};