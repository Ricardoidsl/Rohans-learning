#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;

    cin.get();

    char sentence[1000];
    char largest[1000];

    int larg = 0;

    while(n--)
    {
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if (len > larg)
        {
            larg = len;
            strcpy(largest, sentence);
        }

    }
    
    cout<<largest;

    return 0;
}