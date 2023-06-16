#include <bits/stdc++.h>
using namespace std;

int clearBit(int n, int pos)
{
    int zeroAtPos = ~(1 << pos);
    return (n & zeroAtPos);
}

int main()
{
    cout << clearBit(5, 2) << endl;
    return 0;
}