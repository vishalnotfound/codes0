#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    // here a and b both become equal as they get out of loop
    // and loop is not making anyone of a and b zero, it just making them equal which means
    //   if they are equal so in next step one will be zero as so either of them would be gcd;

    // thus return a or return b; any of these is right;
    return a;
}
