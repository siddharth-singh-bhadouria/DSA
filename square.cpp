#include <bits/stdc++.h>
using namespace std;
// #include <cmath>

int main()
{
    int t;
    cin >> t;
    int arr[8];
    while (t--)
    {
        for (int i = 0; i < 8; i++)
        {
            cin >> arr[i];
        }
        int d1 = sqrt((arr[2] - arr[0]) * (arr[2] - arr[0]) + (arr[3] - arr[1]) * (arr[3] - arr[1]));
        int d2 = sqrt((arr[4] - arr[0]) * (arr[4] - arr[0]) + (arr[5] - arr[1]) * (arr[5] - arr[1]));
        int d = min(d1, d2);
        cout << d * d << endl;
    }
    return 0;
}