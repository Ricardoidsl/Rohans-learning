#include<iostream>

using namespace std;

void insertion(int arr[], int n)
{
    int current = a[i];
    int prev = i - 1;

    for(int i = 1; i <= n - 1; i++)
    {
        if(prev >= 0, arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;

        arr[prev + 1] = current;
    }
}

/*
void insertion(int arr[], int n)
{
    int current = arr[i];
    int previous = i - 1;

    for(int i = 1; i <= n - 1; i++)
    {
        if(prev>=0, arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous = previous - 1;
        }
        arr[previous + 1] = current;
    }
}

void bubblesort(int arr[], int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = 0; j <= n - 2; J++)
        {
            if(arr[j] > arr[j + 1])
            {swap(arr[j + 1], arr[j]);}
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