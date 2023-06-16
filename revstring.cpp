#include <bits/stdc++.h>
using namespace std;

void rev(string s, int i)
{
    if (i == s.size() - 1)
    {
        cout << s[i];
        return;
    }
    rev(s, i + 1);
    cout << s[i];
}

int main()
{

    string str = "manushi";
    rev(str, 0);
    return 0;
}