#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char op;

    cout<<"enter number 1: ";
    cin>>a;
    cout<<"enter operator: ";
    cin>>op;
    cout<<"enter number 2: ";
    cin>>b;
    
    double result;
    
    if(op == '+')
    {result = a + b;}
    else if(op == '-')
    {result = a - b;}
    else if(op == '*')
    {result = a * b;}
    else if(op == '/')
    {result = a / b;}
    else
    {cout<<"na";}

    cout<<result;

    return 0;
    
}