#include <iostream>
using namespace std;


void swapAlt(int a[], int size) {
  for (int i = 0; i < size; i+=2) {
        if (i + 1 < size)
        {
            swap(a[i], a[i+1]);
        }
        
  }
}
  

void printArray(int a[], int size) {
  for(int i = 0; i < size; i++) {
    cout<< a[i] << " ";
  }
}
  

int main(){
  int arr[5] = {1,2,3,4,5};
  int brr[6] = {1,2,3,4,5,6};

  swapAlt(arr,5);
  swapAlt(brr,6);

  printArray(arr, 5);
  cout<<endl;
  printArray(brr, 6);
  
  
  return 0;
  
}