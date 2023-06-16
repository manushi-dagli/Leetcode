#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry = 0;
        int A = a.size() - 1;
        int B = b.size() - 1;
        string ans;
        while (A >= 0 || B >= 0 || carry == 1)
        {
            if (A >= 0)
            {
                carry += a.at(A--) - '0';
            }
            if (B >= 0)
            {
                carry += b.at(B--) - '0';
            }
            ans += carry % 2 + '0';
            carry /= 2;
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};