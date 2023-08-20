#include <iostream>

using namespace std;

int main()
{
    char ch[1000];
    cin.getline(ch, 1000);

    int x = 0;
    int y = 0;

    for(int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i]== 'N')
        {
            ch[i] = y++;
        }
        else if(ch[i]== 'S')
        {
            ch[i] = y--;
        }
        else if(ch[i]== 'W')
        {
            ch[i] = x--;
        }
        else if(ch[i]== 'E')
        {
            ch[i] = x++;
        }
    }

    cout<<x<<" , "<<y;

    return 0;
}