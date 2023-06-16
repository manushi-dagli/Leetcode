#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, sum;
    cin >> n >> sum;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0, s = 0, e = 0, currsum = 0;
    while (j < n && currsum + a[j] <= sum)
    {
        currsum += a[j];
        j++;
    }

    if (currsum == sum)
    {
        cout << i << "," << j - 1 << endl;
        return 0;
    }

    while (j < n)
    {
        currsum += a[j];

        while (i < n && currsum > sum)
        {
            currsum -= a[i];
            i++;
        }
        if (currsum == sum)
        {
            s = i;
            e = j;

            break;
        }
        j++;
    }
    cout << i << "," << j << endl;
    return 0;
}