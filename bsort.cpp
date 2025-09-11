#include <iostream>
#include <algorithm> // For std::swap
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // Corrected loop range
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break; // If no elements were swapped, the array is sorted
        }
    }
}

int main()
{
    int arr[5] = {2, 7, 6, 1, 5};

    bubbleSort(arr, 5);

    // Print the sorted array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
