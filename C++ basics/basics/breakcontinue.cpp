/*#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 20 ; i++)
    {
        if(i == 4)
        {
            break;
        }

     cout<<i;
    }

    return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
           continue;
        }
    
    cout<<i;
    }

    return 0;
}