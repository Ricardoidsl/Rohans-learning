#include <iostream>

using namespace std;

class movies
{
    private:
    string rating;

    public:
    string name;
    string character;

    movies(string a, string b, string c)
    {
        name = a;
        rating = b;
        character = c;
        if (b == "pg" || b == "g" || b == "r" || b == "a" || b == "ur")
        {
            rating = b;
        }
        else
        {rating = "nr";}
        
    }

    void display()
    {cout<<"the movie is "<<name<<" rated "<<rating<<" whose best character is "<<character;}
};

int main()
{
    movies movie1("welcome", "ur", "majnu bhai");

    movie1.display();

    return 0;

}