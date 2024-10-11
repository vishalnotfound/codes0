#include <iostream>

using namespace std;

void reverseArray(int array[], int n) {
    if (n >= 2) {
        for (int i = 0; i < n / 2; i++) {
            swap(array[i], array[n - (1 + i)]);
        }
    }
}

int main() {
    int arr[100];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Type the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
