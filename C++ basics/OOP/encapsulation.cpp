/*encapsulation refers to the process through which we make the variables of a class accesible only to
the given class in a way that any other class can not directly modify or access it, can be accessed using techniques 
which is shown or getters setters"*/

#include <iostream>

using namespace std;

class gf
{
    private:
    string rohanlike;
    string rohanswife;
    string rohanslife;
    string name;

    public:

    gf(string a, string b = "yes", string c = "yes", string d = "yes")
    {
        name = a;
        rohanlike = b;
        rohanswife = c;
        rohanslife = d;
    }

    void test()
    {
        cout<<"enter your name: ";
        cin>>name;
        if(name == "devanshi")
        {cout<<"yes "<<name<<" rohan likes you "<<rohanlike<<" rohans wife you are "
        <<rohanswife<<" rohans ife you are "<<rohanslife;}
        else
        {cout<<"you are a fatty loser "<<name;}
    }
};

int main()
{
    gf gf1("devanshi");

    gf1.test();
    
    return 0;
}