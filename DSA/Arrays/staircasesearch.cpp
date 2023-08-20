#include <iostream>

using namespace std;

pair<int, int> stair(int arr[][4], int n, int m, int key)
{
    int s = 0;
    int e = m - 1;

    while(s<= n - 1 and e >= 0)
    {
        if(arr[s][e] == key)
        {
            return {s,e};
        }
        if(arr[s][e] < key)
        {
            s++;
        }
        else{e--;}
    }
    if(key < arr[0][0] or key > arr[n - 1][m - 1])
    {
        return {-1,-1};
    }
}

int main()
{
    int arr[][4] = 
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4, m = 4;

    pair<int,int> coords = stair(arr, n, m, 11);
    cout<<coords.first<<","<<coords.second;

    return 0;
}