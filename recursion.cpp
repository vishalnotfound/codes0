#include<iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void reach(int src, int dest){


    //base case
    if(src == dest){
        cout<<" reached "<<endl;
        return;
    }
//  recursive  relation 
reach(src++, dest);

cout<<"source is "<<src <<endl;

    }

int main()
{
    int src = 0;
    int dest = 10;

    reach(src, dest);
    return 0;
}