
#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (k == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (k == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[9] = {1, 2, 2, 2, 3, 3, 3, 3, 4};

    int res = firstOcc(arr, 9, 4);
    if (res != -1)
    {
        cout << "index is" << res;
    }
    else
    {
        cout << "wrong\n";
    }

    int res2 = lastOcc(arr, 9, 4);
    if (res2 != -1)
    {
        cout << "\nindex is" << res2;
    }
    else
    {
        cout << "wrong\n";
    }
}