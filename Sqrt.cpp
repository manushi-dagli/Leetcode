#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
        {
            return x;
        }
        else
        {
            int start = 1;
            int end = x;
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                if (mid * mid == x)
                {
                    return mid;
                }
                else if (mid * mid > x)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            return end;
        }
    }
// };
int main(){
    int ans=mySqrt(8);
    cout<<ans<<endl;
    return 0;
}