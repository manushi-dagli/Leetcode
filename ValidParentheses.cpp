#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> bracket;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                bracket.push(s[i]);
            }
            else
            {
                char top = bracket.top();
                if (!bracket.empty() && ((top == '{' && s[i] == '}') || (top == '[' && s[i] == ']') || (top == '(' && s[i] == ')')))
                {
                    bracket.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return bracket.empty();
    }
};