//bruteforce approach to find subarray sum

#include <iostream>

using std::cout;
using std::endl;
using std::max;

int subarraysum(int arr[], int n)
{
    int largestsum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sarraysum = 0;
            for (int k = i; k <= j; k++)
            {
                sarraysum = sarraysum + arr[k];
                }
            largestsum = max(largestsum, sarraysum);
        }
        
    }

    return largestsum;

}

/*
int subarraysum(int arr[], int n)
{
    int largest = 0;
    for( int i = 0; i < n; i++)
    {for(int j = 0; j < n; j++)
    {
        int cs = 0;
        for( int k = i; k <= j, k++)
        {cs= cs + arr[k];}
        largest = max(largest, cs);
    }

    return largest
    
    }
}
*/

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(int);

    cout<<subarraysum(arr,n)<<endl;

    return 0;
}