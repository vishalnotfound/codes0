#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) return 0;  
        if (n == 1) return 1; 
        if(n==2) return 2; 
        int first = 1, second = 2,ans = 0;

        for (int count = 3; count <= n; ++count) {
            ans = first + second;
                 first = second;
                 second = ans;
           }
        
return second;
    }
};

int main()
{
    
    return 0;
}