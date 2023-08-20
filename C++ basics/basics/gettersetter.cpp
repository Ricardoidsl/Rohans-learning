#include <iostream>

using namespace std;

class movie
{
    private:
    string rating;

    public:
    string name;
    string director;
    

    movie(string aname, string adirector, string arating)
    {
        name = aname;
        director = adirector;
        setrating(arating);
    }

    string setrating(string arating)
    {
        if(arating == "pg" || arating == "pg13" || arating == "r" || arating == "g")
        {rating = arating;}
        else
        {rating = "nr";}
        return rating;
    }


};

int main()
{
    movie movie1("avengers", "whedon", "pg");

    cout<<movie1.setrating("dog");

    return 0;
}