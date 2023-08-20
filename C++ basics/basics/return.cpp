#include <iostream>

using namespace std;

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    cout<<cube(5.8293)<<endl;
    return 0;
}
