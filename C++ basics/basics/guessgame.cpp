#include <iostream>

using namespace std;

int main()
{
    int password = 1234;
    int guess;
    int guesscount = 0;
    int guesslimit = 5;
    bool guessover = false;

    while(guess != password && !guessover)
    {
        if(guesscount < guesslimit)
        {
            cout<<"enter password: ";
            cin>>guess;
            guesscount++;
        }
        else
        {
            guessover = true;
        }
    }

    if(guess == password)
    {cout<<"you are logged in";}
    else{cout<<"ask administrator for access";}

    return 0;
}