#include <bits/stdc++.h>
using namespace std;

int clearBit(int n, int pos)
{
    int zeroAtPos = ~(1 << pos);
    return (n & zeroAtPos);
}

int updateBit(int n, int pos, int value)
{
    n = clearBit(n, pos);
    return (n | (value << pos));
}

int main()
{

    int n, pos, value;
    cin >> n >> pos >> value;
    cout << updateBit(n, pos, value) << endl;
    return 0;
}