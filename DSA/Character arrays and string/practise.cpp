#include <iostream>
#include <cstring>

using namespace std;

int sum(int arr[], int n)
{
    int cs = 0;
    int ms = 0;
    for(int x: arr)
    {
        cs = cs + x;

        if(cs < 0)
        {
            cs = 0;
        }

        ms = max(ms, cs);
    }

    return ms;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<sum(arr, n)<<endl;
    
    return 0;
}
    
