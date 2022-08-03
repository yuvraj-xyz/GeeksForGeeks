#include <bits/stdc++.h>
using namespace std;

// Print 1 to N without Loop
void printNos(int N)
{
    if(N>1)
    {
        printNos(N-1);
    }
    cout << N << " ";
}
int main()
{
    int N;
    cin >> N;

    printNos(N);
}
