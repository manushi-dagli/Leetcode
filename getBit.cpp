#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{
    cout << getBit(1, 0) << endl;
    return 0;
}