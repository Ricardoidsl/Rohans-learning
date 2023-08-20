#include <iostream>

using namespace std;

class numbers
{
    private:
    int evennumber;
    int oddnumber;

    public:

    numbers(int a = 6, int b = 7)
    {
        evennumber = a;
        oddnumber = b;
    }

    void display()
    {cout<<evennumber<<endl<<oddnumber;}

    numbers operator+(numbers c)
    {
        numbers temp;
        temp.evennumber = evennumber + c.evennumber;
        temp.oddnumber = oddnumber + c.oddnumber;

        return temp;
    }
};

int main()
{
    numbers m;
    numbers n;
    numbers o = m + n;

    o.display();

    return 0;
}