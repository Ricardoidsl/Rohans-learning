#include <iostream>

using namespace std;

void print(int arr[][10], int m, int n)
{
    int startrow = 0;
    int endrow = n - 1;
    int startcolumn = 0;
    int endcolumn = m - 1;
    
    for(int col = endcolumn; col >= startcolumn; col--)
    {
        if(col&1)
        {
            for(int row = startrow; row <= endrow; row++)
            {
                cout<<arr[row][col];
            }
        }
        else
        {
            for(int row = endrow; row >= startrow; row--)
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

    int n = 4, m = 4;

    print(arr, m, n);

    return 0;
}