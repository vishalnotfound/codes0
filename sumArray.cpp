#include<iostream>
using namespace std;

int main()
{
    

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];

    }

    int sum=0;

for (int i = 0; i < 5; i++)
{
    sum= sum+ arr[i];
}
cout<<"the sum is "<<sum;

    


    return 0;
}
