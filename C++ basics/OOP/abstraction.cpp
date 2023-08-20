/*anstraction refers to hiding complex things or classes behind a procedure to make it look simple*/

#include <iostream>

using namespace std;

class gf{
    public: virtual void issheagf () = 0;
};

class hello:gf
{
    private:
    string name;
    string cute;
    string gf;

    public:

    hello(string a, string b, string c)
    {
        name = a;
        cute = b;
        gf = c;
    }

    void issheagf()
    {
        if(name == "devanshi")
        {cout<<"yes you are my gf "<<name;}
        else
        {cout<<"you are not my gf "<<name;}
    }
};

int main
()
{
    hello gf1("heena", "yes cute", "yep");

    gf1.issheagf();

    return 0;
}