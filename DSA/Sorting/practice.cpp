#include <iostream>

using namespace std;

int chop(int arr[], int n, int d)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(abs(arr[i] - arr[i + 1]) <= d)
        {
            cnt++;
            i++;
        }
    }return cnt;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    int d = 2;

    cout<<chop(arr, n, d);

    return 0;
}