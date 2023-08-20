#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "enter your name: ";
    getline(cin, name);
    cout << "hello " <<name;
    return 0;
};

--use cin>> age, name, etc when its for integers or characters