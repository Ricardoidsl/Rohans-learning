#include <iostream>

using namespace std;

class chess
{
    protected:

    string name;
    string country;
    int elo;

    public:

    chess(string a = "error", string b = "error", int c = 0)
    {
        name = a;
        country = b;
        elo =c;
    }

    void chess1()
    {
        cout<<"enter your name: ";
        cin>>name;
        cout<<"enter country represented: ";
        cin>>country;
        cout<<"enter elo: ";
        cin>>elo;
        cout<<"welcome to the userbase "<<name<<", you represent "<<country<<" with an elo of "<<elo;
    }

};

class gm:chess
{
    private:
    string title;

    public:

    gm(string name = "error", string country = "error", int elo = 0, string d = "Grandmaster")
    :chess(name, country, elo)
    {
        title = d;
    }

    void gma()
    {
        cout<<"enter your name grandmaster: ";
        getline(cin,name);
        cout<<"enter country represented: ";
        getline(cin, country);
        cout<<"enter elo: ";
        cin>>elo;
        cout<<"welcome to the userbase "<<title<<" "<<name<<", you represent "<<country<<" with an elo of "<<elo;}
    

};

class im:chess
{
    private:
    string titlem;

    public:

    im(string name = "error", string country = "error", int elo = 0, string e = "International Master")
    :chess(name, country, elo)
    {
        titlem = e;
    }

    void ima()
    {
        cout<<"enter your name international master: ";
        cin>>name;}

    void ima1(){cout<<"enter country represented: ";
        cin>>country;}
    void ima2() {cout<<"enter elo: ";
        cin>>elo;
        cout<<"welcome to the userbase "<<titlem<<" "<<name<<", you represent "<<country<<" with an elo of "<<elo;}

};

int main()
{
    gm gm1;

    gm1.gma();

    return 0;
}

    /*gm gm1("Robert James fischer", "USA", 2785);
    gm gm2("Vasyl Ivanchuk", "USSR", 2780);
    gm gm3("Alexander Grischuk", "Russia", 2815);
    gm gm4("Vladimir Kramnik", "Russia", 2820);
    gm gm5("Adhiban", "India", 2701);
    im im1("Rashid Nezhmetdinov", "USSR", 2720);
    im im2("Vladas Mikenas", "USSR", 2510);
    im im3("Emory Tate", "USA", 2480);
    im im4("Levy Rozman", "USA", 2610);

    gm1.gma();
    gm2.gma();
    gm3.gma();
    gm4.gma();
    gm5.gma();
    im1.ima();
    im2.ima();
    im3.ima();
    im4.ima();*/

