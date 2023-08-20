#include <iostream>

using namespace std;

int main()
{
    int age = 20;
    string name = "devanshi";
    double gpa = 0.1;

    int *page = &age;

    cout<< *page<<endl;
    /* or to reference it directly use cout<<&(variable), or to deference using pointer variabbles
    use cout<<*p(variable), continue adding & or * to just reference or derefeernce lmao*/
    return 0;
}