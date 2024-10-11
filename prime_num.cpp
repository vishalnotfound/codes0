//check whether a nummber is prime or no using while loop and if else loop

#include<iostream>
using namespace std;

int main() 
{
    int n;
    int i=2;

    cout<<"enter the num: "<<endl;
    cin>>n;

    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"prime number for "<<i  <<endl;
    
        }
        else
        {
            cout<<"non prime number for"<<i<<endl;
        }
        ++i;
    }
    

    
    
    return 0;
}