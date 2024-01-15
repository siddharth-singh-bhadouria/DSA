#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int str;
        cin >> str;
        string a1, b1;
        cin >> a1 >> b1;
        int x1 = 0;
        int x2 = 0;
        int q = 0;
        for (int i = 0; i < str; i++)
        {
            if (a1[i] == '0' && b1[i] == '1')
            {
                x1++;
            }
            else if (a1[i] == '1' && b1[i] == '0')
            {
                x2++;
            }
        }
        q += abs(x2 - x1);
        q += min(x2, x1);
        cout << q << endl;
    }
}