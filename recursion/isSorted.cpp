#include<iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
    //base case
    if(size == 0 || size ==1)
    return true;
    int ans;
    if(arr[0]>arr[1]) return false;
    else{
 ans = isSorted(arr+1, size-1);
    }
    
    // recursive call

return ans;

}

int main()
{
    int arr[5] {4,2,8,9,0};
    int arr32[5] {4,12,18,19,110};
   cout<< isSorted(arr,5)<<endl;
   cout<<isSorted(arr32,5)<<endl;


    return 0;
}