#include <iostream>

using std::cout;
using std::endl;

int maxsubarraysum(int arr[], int n)
{
    int cs = 0;
    int largest = 0;
    for(int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if(cs < 0)
        {cs = 0;}
     largest = std::max(cs, largest);
    }
    return largest;
}

/*
int maxsubarraysum(int arr[], int n)
{
    int cs = 0;
    int ms = 0;

    for(int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if(cs < 0)
        {cs = 0;}

        ms = max(ms, cs)
    }
}
*/

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<maxsubarraysum(arr, n)<<endl;
    
    return 0;
}