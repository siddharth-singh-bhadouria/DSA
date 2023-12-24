// 1.
// #include <iostream>
// using namespace std;

// void func(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     func(i + 1, n);
//     cout << i << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     func(1, n);
//     return 0;
// }

// 2.
#include <iostream>
using namespace std;

bool func(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return func(i + 1, s);
}

int main()
{
    string s;
    cin >> s;
    cout << func(0, s) << endl;
    return 0;
}