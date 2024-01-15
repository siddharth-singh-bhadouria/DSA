#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {1,
                  2,
                  3,
                  4,
                  23};

    int c = 1;

    int n = sizeof(nums);
    int arr[n];
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 1; i <= sizeof(nums); i++)
    {
        if (nums[i - 1] > sizeof(nums) || nums[i - 1] < 1)
        {
            continue;
        }
        else
        {
            arr[nums[i - 1] - 1] = 1;
        }
    }

    for (int i = 0; i < sizeof(nums); i++)
    {
        if (arr[i] == 0)
        {
            c = i + 1;
            x++;
            break;
        }
    }

    if (x == 0)
        c = sizeof(nums) + 1;

    cout << c;
}