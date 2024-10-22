#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int reverse = 0;
        while (x != 0)
        {
            int dig = x % 10;
            if (reverse < INT_MIN / 10 || reverse > INT_MAX / 10)
                return 0; // reverse*10 > INT_MAX then overflow; send the 10 other side.
            reverse = reverse * 10 + dig;
            x = x / 10;
        }
        return reverse;
    }
};

int main()
{

    return 0;
}
