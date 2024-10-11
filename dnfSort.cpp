// pseudocode for dnf //only valid for 0,1,2 in an array with multiple frequency

// function DNFSort(array):
//     low ← 0
//     mid ← 0
//     high ← length(array) - 1

//     while mid ≤ high:
//         if array[mid] == 0:
//             swap(array[low], array[mid])
//             low ← low + 1
//             mid ← mid + 1
//         else if array[mid] == 1:
//             mid ← mid + 1
//         else:  # array[mid] == 2
//             swap(array[mid], array[high])
//             high ← high - 1

//     return array
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        { // nums[mid] == 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    return 0;
}
