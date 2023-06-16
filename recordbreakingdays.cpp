#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n + 1];

    arr[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int count = 0;
    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi && arr[i] > arr[i + 1])
        {
            count++;
        }
        maxi = max(maxi, arr[i]);
    }
    cout << count << endl;

    return 0;
}