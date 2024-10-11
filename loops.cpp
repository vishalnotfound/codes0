#include<iostream>
using namespace std;

int main()
{



char ch;
ch = cin.get();

if (isupper(ch))
{
cout<<"uppercase";
}
else if (islower(ch))
{
cout<<"lowercase";
}
else if (isdigit(ch))
{
cout<<"numeric";
}
else
cout<<"special character";






    return 0;
}