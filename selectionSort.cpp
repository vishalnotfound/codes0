#include <iostream>
#include <algorithm> // For std::swap

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the elements at indices i and minIndex
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[5] = {2, 4, 9, 1, 5};

    selectionSort(arr, 5);

    // Print the sorted array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
