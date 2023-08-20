/*parent class reference used to refer to an object of the child class*/
#include <iostream>

using namespace std;

class chess
{
    public:
    string name;
    string country;
    int elo;

    public:
    chess(string a, string b, int c)
    {
        name = a;
        country = b;
        elo = c;
    }

    void chessm()
    {cout<<name<<" from "<<country<<" has an elo of "<<elo;}
};

class gm:chess
{
    public:
    string title;

    gm(string name, string country, int elo, string d = "grandmaster")
    :chess(name, country, elo)
    {title = d;}

    void chessm()
    {cout<<name<<" from "<<country<<" has an elo of "<<elo<<" with the title "<<title<<endl;}

};

class im:chess
{
    public:
    string titlem;

    im(string name, string country, int elo, string e = "international master")
    :chess(name, country, elo)
    {titlem = e;}

    void chessm()
    {cout<<name<<" from "<<country<<" has an elo of "<<elo<<" with the title "<<titlem<<endl;}

};



int main()
{
    gm gm1("Robert James fischer", "USA", 2785);
    im im1("Rashid Nezhmetdinov", "USSR", 2710);

    /*gm1.chessm();
    im1.chessm();*/

    chess* n = &gm1;
    chess* n2 = &im1;

    return 0;
}