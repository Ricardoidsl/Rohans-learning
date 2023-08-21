#include <iostream>

using namespace std;

void zigzig(int arr[][10], int n, int m)
{
    int startrow = 0;
    int endrow = n - 1;
    int startcolumn = 0;
    int endcolumn = m - 1;

    for(int row = startrow; row <= endrow; row++)
    {
        if(row&1)
        {
            for(int col = startcolumn; col <= endcolumn; col++)
            {
                cout<<arr[row][col];
            }
        }
        else
        {
            for(int col = endcolumn; col >= startcolumn; col--)
            {
                cout<<arr[row][col];
            }
        }
    }
}

int main()
{
    int arr[][10] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4;
    int m = 4;

    zigzig(arr, n, m);

    return 0;
}