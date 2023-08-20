#include <iostream>
#include <string>
#include<cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    int num[];

    for(auto x: s)
    {
        if( x == '0')
        {
            s.push_back(0);
        }
         if( x == '1')
        {
            s.push_back(1);
        }
         if( x == '10')
        {
            s.push_back(2);
        }
         if( x == '11')
        {
            s.push_back(3);
        }
         if( x == '100')
        {
            s.push_back(4);
        }
         if( x == '101')
        {
            s.push_back(5);
        }
         if( x == '110')
        {
            s.push_back(6);
        }
         if( x == '111')
        {
            s.push_back(7);
        }
         if( x == '1000')
        {
            s.push_back(8);
        }
         if( x == '1001')
        {
            s.push_back(9);
        }
    }return num;
}