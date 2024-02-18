// #include <bits/stdc++.h>
// using namespace std;

// void revFun(int arr[], int n, int i)
// {
//     int l = arr[0] == '-' ? (n - 1) / 2 : n / 2;
//     if (i >= l)
//         return;
//     int start = arr[0] == '-' ? 1 : 0;
//     swap(arr[start + i], arr[n - 1 - i]);
//     revFun(arr, n, i + 1);
// }

// int reverse(int x)
// {
//     string s = to_string(x);
//     int n = s.size();
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = s[i];
//     }
//     revFun(arr, n, 0);
//     string st;
//     for (int i = 0; i < n; i++)
//     {
//         st = st + (char)(arr[i]);
//     }
//     try
//     {
//         stoi(st);
//     }
//     catch (...)
//     {
//         return 0;
//     }
//     int y = stoi(st);
//     return y;
// }

// int main()
// {
//     int x;
//     cin >> x;
//     int y = reverse(x);
//     cout << y;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int y = x;
    long t = 0;
    while (y != 0)
    {
        t = t * 10 + y % 10;
        y = y / 10;
    }

    if (t > INT_MAX || t < INT_MIN)
    {
        return 0;
    }
    return (int)t;
}

int main()
{
    int x;
    cin >> x;
    int y = reverse(x);
    cout << y << endl;
    return 0;
}