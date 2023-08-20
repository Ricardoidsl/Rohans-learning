#include <iostream>

using namespace std;

int main()
{
    bool isdevanshi = true;
    bool ishappy = false;

    if(isdevanshi && ishappy)
    {cout<<"rohan happy and annoys her";}
    else if(isdevanshi && !ishappy)
    {cout<<"rohan pampers her and pets her";}
    else if(!isdevanshi && ishappy)
    {cout<<"rohan doesnt care";}
    else{cout<<"rohan doesnt care";}

    return 0;
}

-- && and || or !not true