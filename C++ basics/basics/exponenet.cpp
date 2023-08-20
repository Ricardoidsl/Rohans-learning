#include <iostream>

using namespace std;

double power(double base, double power)
{
    int result = 1;
    for(int i = 0; i < power ; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    cout<<power(2,3);

    return 0;
}