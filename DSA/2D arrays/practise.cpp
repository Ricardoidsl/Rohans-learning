#include <iostream>

using namespace std;

int ncr(int n, int r)
{
    int ans = 1;
    for(int i = 0; i < r; i++)
    {
        ans = ans*(n - i);
        ans = ans/(i + 1);
    }
    return ans;
}

int main()
{
    int n;
    int t = n - 1;
    cin>>n;
    
    int r;
    int s = r - 1;
    cin>>r;
    
    cout<<ncr(t,s);
    
    
}