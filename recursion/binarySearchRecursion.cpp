#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int key)
{

    // base case
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key); // gnereally recursive call is returned
    }
}

int main()
{
    vector<int> arr = {2, 4, 56, 78, 90, 100};
    int start = 0;
    int end = arr.size() - 1;
    int key = 90;
    int ans = binarySearch(arr, start, end, key);
    cout << ans;
    return 0;
}