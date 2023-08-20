#include <iostream>

using namespace std;

int main()
{
    int numbers[2][3] = {{1, 2, 3},{3, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {cout<<numbers[i][j];}
    ;}

    

    return 0;
    
}

/*the endl is key to break the line after each execution of the rows and columns
it recontinues it in the loop*/