#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
    cout<<"enter third number: ";
    cin>>num3;

    int result;

    if(num1 >= num2 && num1 >= num3)
    {result = num1;}
    else if(num2 >= num1 && num2 >= num3)
    {result = num2;}
    else{result = num3;}

    cout<<result;
   
    return 0;
}