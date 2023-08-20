#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sentence[1000];

    char temp = cin.get();

    int len = 1;
    while(temp != '\n')
    {
        len++;
        cout<<temp;
        temp = cin.get();
    }
    cout<<"length is "<<len<<endl;

    return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{
    char ch;

    ch = cin.get();

    while(ch != '\n')
    {
        cout<<ch;
        ch = cin.get();
    }

    return 0;
}

