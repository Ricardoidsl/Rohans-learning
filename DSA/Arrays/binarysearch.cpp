#include <iostream>

using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while(s<=e)
    {
        int mid = (s + e)/2;
        if(arr[mid] == key)
        {return mid;}
        else if(arr[mid] > key)
        {e = mid - 1;}
        else
        {s = mid + 1;}
    }

    return -1;
}

int binarysearh(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while(s<=e)
    {
        int mid;
        mid = (s + e)/2;
        if(arr[mid] = key)
        {return mid}
        else if(arr[mid] > key)
        {e = mid -1;}
        else
        {s = mid + 1;}
    }

    return -1;
}

/*
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while( s <= e)
    {
        int mid;
        mid = (s+e)/2;
        if(arr[mid] == key)
        { return key;}
        else if(arr[mid] > key)
        {e = mid -1};
        else
        {s = mid + 1};
    }

    return -1;
}
*/
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter key: ";
    cin>>key;

    int index = binarysearch(arr, n, key);
    if(index != -1)
    {cout<<"your key is located at: "<<index;}
    else{cout<<"key not found ";}

    return 0;

}