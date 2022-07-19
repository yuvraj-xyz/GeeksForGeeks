#include <bits/stdc++.h>
using namespace std;

// Check whether K-th bit is set or not
int main()
{
    int n = 4,k = 2;

    bool res;
    if(((n>>k)&1)==1)
    {
        res = true;
    }
    else
    {
        res = false;
    }
    cout << res;
}
