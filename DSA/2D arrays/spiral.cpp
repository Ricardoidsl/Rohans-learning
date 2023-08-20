#include <iostream>

using namespace std;

void print(int arr[][10], int n, int m)
{
    int startrow = 0;
    int endrow = n - 1;
    int startcolumn = 0;
    int endcolumn = m - 1;

    while(startcolumn <= endcolumn and startrow <= endrow)
    {
        for(int col = startcolumn; col <= endcolumn; col++)
        {
            cout << arr[startrow][col];
        }
        for(int row = startrow + 1; row <= endrow; row++)
        {
            cout << arr[row][endcolumn];
        }
        for(int col = endcolumn - 1; col>= startcolumn; col--)
        {
            if(startrow == endrow)
            {
                break;
            }
            cout<<arr[endrow][col];
        }
        for(int row = endrow - 1; row >= startrow + 1; row--)
        {
            if(startcolumn == endcolumn)
            {
                break;
            }
            cout<<arr[row][startcolumn];
        }
        startrow++;
        startcolumn++;
        endrow--;
        endcolumn--;

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

    print(arr, n, m);

    return 0;
}