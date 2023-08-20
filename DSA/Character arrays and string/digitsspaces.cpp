#include <iostream>

using namespace std;

int main()
{
    char ch;

    ch = cin.get();

    int alpha = 0;
    int num = 0;
    int space = 0;

    while(ch != '\n')
    {
        cout<<ch;
        if((ch >= 'a' && ch<= 'z') or (ch >= 'A' && ch <= 'Z'))
        {
            alpha++;
        }
        if(ch >= '0' && ch<= '9')
        {
            num++;
        }
        if(ch == ' ')
        {
            space++;
        }
        ch = cin.get();
    }

    cout<<" and the senetence has "<<space<<" no of spaces, "<<alpha<<" no of alphabets, "<<"and "<<num<<" numbers.";

    return 0;
}