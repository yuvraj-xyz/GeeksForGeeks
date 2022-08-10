#include <bits/stdc++.h>
using namespace std;

// Subsets Sum
void fun(int i, int sum, int N, vector<int> &res, vector<int> &arr)
{
    if(i==N)
    {
        res.push_back(sum);
        return;
    }
    fun(i+1, sum+arr[i], N, res, arr);
    fun(i+1, sum, N, res, arr);
}
int main()
{
    vector<int> arr = {2,3};
    int N = 2;

    vector<int> res;
    fun(0, 0, N, res, arr);
    for(int j=0; j<res.size(); j++)
    {
        cout << res[j] << " ";
    }
    cout << endl;
}
