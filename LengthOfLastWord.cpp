#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        int i = s.length() - 1;
        while (s[i] == ' ' && i >= 0)
        {
            i--;
        }
        while (s[i] != ' ' && i >= 0)
        {
            i--;
            count++;
        }

        return count;
    }
};