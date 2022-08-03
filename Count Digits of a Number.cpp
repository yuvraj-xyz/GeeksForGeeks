#include <bits/stdc++.h>
using namespace std;

// Count Total Digits in a number
int countDigits(int n)
{
    if(n/10==0)
    {
        return 1;
    }
    int i=1;
    return (1 + countDigits(n/10));
}
int main()
{
    int n;
    cin >> n;

    cout << countDigits(n);
}
