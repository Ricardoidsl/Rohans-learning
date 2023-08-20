#include <iostream>

using namespace std;

class student
{
    public:
    string name;
    string major;
    double gpa;

    student (string aname, string amajor, double agpa)
    {
        name = aname;
        major = amajor;
        gpa = agpa;
    }

    bool hashonors(){
        if(gpa > 9.0)
        {return true;}
        return false;
    }

};

int main()
{
    student student1("rohan", "ECE", 9.8);
    student student2("devanshi", "IT", 1.2);

    cout<<student1.hashonors();

    return 0;
}