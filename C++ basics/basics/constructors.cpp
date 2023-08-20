/*constructors can also be used as trigger, sort of, by doing simple book(){cout<<"object created"} and 
it will print that everytime we run the code without a cout, if objects need to be same you can also preset
everything by book(){title  and every other variable already preset}*/

#include <iostream>

using namespace std;

class chessplayer
{
    public:
    string name;
    string country;
    string faveopening;
    int elo;

    chessplayer(string aname, string acountry, string afaveopening, int aelo)
    {
        name = aname;
        country = acountry;
        faveopening = afaveopening;
        elo = aelo;
    }
};

int main()
{
    chessplayer a("robert james fischer", "USA", "King's Pawn", 2785);
    chessplayer b("vasil ivanchuk", "USSR/Ukraine", "anything", 2780);
    chessplayer c("rashid nezhmetdinov", "USSR", "king's pawn", 2670);

    cout<<c.elo;

    return 0;
}
