#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;
using std::swap;

void bubblesort(vector <int> arr, int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        for( int j = 0; j <= n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {swap(a[j], a[j + 1]);}
            //cout<<arr[j]<<endl;

        }
    }
}

int main()
{
    vector <int> arr = {5, 6, 3, 4, 1, 2, 7};
    int n = arr.size();
    bubblesort(arr, n);

    for(auto x: arr){cout<<x<<",";}

    return 0;
}