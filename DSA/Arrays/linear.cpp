#include <iostream>

using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for(int i = 0, i < n, i++)
    {
        if(arr[i] == key)
        {return i;}
    }
    return -1;
}

/*
int linearsearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(key == arr[i])
        {return i}
    }
    return -1
}
*/

int main()
{
    int arr[]= {1, 2, 3, 4, 5, 6};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter key: ";
    cin>>key;

    int index = linearsearch(arr, n, key);
    if(index != -1)
    {cout<<"the key is at index "<<index<<endl;}
    else{cout<<"key not found";}

    return 0;


}