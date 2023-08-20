#include <iostream>

using namespace std;

void insertionsort(int arr[], int n)
{
    for(int i = 0; i <= n - 2; i++)
    {
        int current = arr[i];
        int pos = i;

        for(int j = i; j < n; j++)
        {
            if(arr[j] < current)
            {pos = j;}
        }swap(current, arr[pos]);
    }
}
/*
void insertionsort(int arr[], int n)
{
    for(int i = 0; i <= n - 2; i++)
    {
        int current = arr[i]
        int pos= i;

        for(int j = i; j < n; j++)
        {
            if(current > arr[j])
            {pos = j;}
        }
        swap(current, arr[pos])
    }
}


void bubblesort(int arr[], int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = 0; j <= n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j],arr[j + 1];)
            }
        }
    }
}

void insertionsort(int arr[], int n)
{
    int current = arr[i];
    int prev= i - 1;

    for(int i = 1; i <= n - 1; n++)
    {
        if(arr[prev] > current)
        {
            arr[previous] = arr[previous + 1];
            prev = prev - 1;
        }
    }arr[previous + 1] = current
}
void selectionsort(int arr[], int n)
{
    int current = arr[i]
    int pos = i;
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(current > arr[j])
            pos = j;
        }
    }swap(current, arr[j];)
}
*/

/*
void bubblesort(int arr[], int n)
{
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = 0; j <= n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1];)
            }
        }
    }
}

void insertionsort(int arr[], int n)
{
    int curr = arr[i];
    int prev = i - 1;
    for(int i = 1; i <= n - 1; i++)
    {
        if(arr[prev] > curr)
        {
            arr[prev] = arr[prev + 1];
            prev = prev - 1;
        }
    }arr[prev + 1] = curr;
}
{
    void selectionsort{int arr[], int n}
    {
        int curr = a[i];
        int pos = i;
        for(int i = 0; i <= n - 2; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(curr > a[j])
                {
                    pos = j;
                }
            }swap(arr[pos], curr)
        }
    }
}
*/
int main()
