#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;
using std::swap;

void bubblesort(int a[], int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        for( int j = 0; j <= n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {swap(a[j], a[j + 1]);}
        }
    }
}
/*
void bubblesort(int arr[], int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = 0; j <= n - i - 1; j ++)
        if(arr[j] > arr[j + 1])
        {swap(arr[j],arr[j+1]);}
    }
}
}
*/
int main()
{
    int arr[] = {5, 6, 3, 4, 1, 2, 7};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr, n);

    //for(auto x: arr){cout<<x<<",";}

    return 0;
}