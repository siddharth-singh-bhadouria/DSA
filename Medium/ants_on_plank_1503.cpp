#include <iostream>
using namespace std;

int main()
{

    int leftArr[] = {};
    int rightArr[] = {0, 1, 2, 3, 4, 5, 6, 7};

    int t = 0;

    int min_left = 0, max_left = 0, min_right = 0, max_right = 0;

    int leftSize = sizeof(leftArr) / sizeof(leftArr[0]);
    int rightSize = sizeof(rightArr) / sizeof(rightArr[0]);

    if (leftSize == 0 && rightSize == 0)
    {
        t = 0;
    }

    else if (leftSize == 0)
    {
        max_right = rightArr[0];
        for (int i = 0; i < rightSize; i++)
        {
            if (rightArr[i] > max_right)
            {
                max_right = rightArr[i];
            }
        }
        t = max_right;
    }

    else if (rightSize == 0)
    {
        max_left = leftArr[0];
        for (int i = 0; i < leftSize; i++)
        {
            if (leftArr[i] > max_left)
            {
                max_left = leftArr[i];
            }
        }
        t = max_left;
    }

    else if (max_right)
    {

        min_left = leftArr[0];
        for (int i = 0; i < leftSize; i++)
        {
            if (leftArr[i] < min_left)
            {
                min_left = leftArr[i];
            }
        }

        min_right = rightArr[0];
        for (int i = 0; i < rightSize; i++)
        {
            if (rightArr[i] < min_right)
            {
                min_right = rightArr[i];
            }
        }

        max_left = leftArr[0];
        for (int i = 0; i < leftSize; i++)
        {
            if (leftArr[i] > max_left)
            {
                max_left = leftArr[i];
            }
        }

        max_right = rightArr[0];
        for (int i = 0; i < rightSize; i++)
        {
            if (rightArr[i] > max_right)
            {
                max_right = rightArr[i];
            }
        }

        if (max_right > max_left)
        {
            t = max_right - min_left;
        }

        else if (max_left > max_right)
        {
            t = max_left - min_right;
        }
    }

    cout << t << endl;

    return 0;
}
