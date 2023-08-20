#include <iostream>

using namespace std;

class chess
{
    private:
    string name;
    int elo;
    string country;

    public:

    chess(string a = "Fischer", int b = 2785, string c = "USA")
    {
        name = a;
        elo = b;
        country = c;
    }

    void display()
    {
        cout<<"The player name is "<<name<<" with an elo of "<<elo<<" representing "<<country;
    }
};

int main()
{
    chess player;
    
    player.display();

    return 0;
}

