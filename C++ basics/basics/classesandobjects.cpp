
/*private - Only the current class will have access to the field or method.

protected - Only the current class and subclasses (and sometimes also same-package classes) of this class will have access to the field or method.

public - Any class can refer to the field or call the method.*/

#include <iostream>

using namespace std;

class chessplayer
{
    public:
    string name;
    string country;
    string faveopening;
    int elo;
};

int main()
{
    chessplayer bobby;
    bobby.name = "Robert James Fischer";
    bobby.country = "USA";
    bobby.faveopening = "king's pawn";
    bobby.elo = 2785;

    cout<<bobby.name<<endl<<bobby.elo<<endl<<bobby.country<<endl<<bobby.faveopening;

    return 0;


}