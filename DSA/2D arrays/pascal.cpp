#include <iostream>

using namespace std;
//first question
int ncr(int n, int r)
{
    long long res = 1;
    for(int i = 0; i < r; i++)
    {
        res=res * (n - i);
        res= res/(i + 1);
    }
    return res;
}
//second question
int second(int n)
{
    long long ans = 1;
    for(int i = 1; i < n; i++)
    {
        ans = ans*(n - i);
        ans = ans/i;
    }
    return ans;
}