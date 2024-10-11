
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;

    int mid =( start + end-start) /2;

    while (start<=end)
    {
       if (arr[mid]==key)
    {
      return mid;
    }
    else if (key<arr[mid])
    {
       end= mid -1;
    } else{
        start=mid+1;
    }

    mid = ( start + end-start ) /2;
    
    }
    return -1;
    
}


int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key;
    cout<<"entr the num you wanna seach: ";
    cin>>key;
    
     

    
    int search= binarySearch(arr,sizeof(arr)/sizeof(arr[0]),key);
    if (search==-1)
    {
        cout<<"element not found"<<endl;
    } else{ 
        cout<<"element found at index "<<search<<endl;
}
    

    return 0;
}

/*

#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key) {

    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevent integer overflow

        if (arr[mid] == key) {
            return mid; // Element found
        } else if (arr[mid] < key) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter the number you want to search: ";
    cin >> key;

    int searchResult = binarySearch(arr, sizeof(arr) / sizeof(arr[0]), key); // Correctly calculate size

    if (searchResult == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << searchResult << endl;
    }

    return 0;
}
*/
