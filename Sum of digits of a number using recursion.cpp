#include <bits/stdc++.h>
using namespace std;

// Sum of Digits of a Number
int sumOfDigits(int N)
{
    if(N==0)
    {
        return 0;
    }
    return(N%10 + sumOfDigits(N/10));
}
int main()
{
    int N;
    cin >> N;
    sumOfDigits(N);
    cout << sumOfDigits(N);
}
