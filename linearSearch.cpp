#include<iostream>
using namespace std;


int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
       if (arr[i]==key)
       {
        return i;
       } 
       
    }
    return -1;
    
        
    

}

int main()
{
    int arr[100];
    int size;
    int key;

    cout<<"enter the size of the array: "<<endl;
    cin>>size;
    cout<<"type the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter the key you wanna search: ";
    cin>>key;

    int index=linearSearch(arr,size,key);

    if (index != -1)
    {
        cout<<"item found at index" << index <<endl;
    }
    else{
        cout<<"element not found";
    }
    
    
    


    return 0;
}