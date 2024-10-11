#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{

    return 0;
}
void unique(int arr[], int n)
{
    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
            if (i == j)
            {
                cout << arr[i] << " ";
            }
        }
    }
}

int main()
{
    int arr[6] = {1, 2, 2, 3, 3, 5};
    unique(arr, 6);

    return 0;
}