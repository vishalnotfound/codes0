#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void colSum(int arr[][3], int size, int row, int col)
{

    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (row = 0; row < 3; row++)
        {
            sum = sum + arr[col][row];
        }
        cout << sum << endl;
    }
}

int main()
{
    // col wise sum for 2-D array
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    colSum(arr, 9, 3, 3);
}