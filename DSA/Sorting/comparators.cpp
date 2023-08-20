#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

void bubblesort(int arr[], int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = 0; j <= n - i - 1; j++)
        {
            if(compare(arr[j],arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = { 1, 4, 2, 6, 3, 7};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr + n, compare);
    //reverse(arr, arr + n);

    for(int x: arr){cout<<x<<endl;}

    return 0;
}*/