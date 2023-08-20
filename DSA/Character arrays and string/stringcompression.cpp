#include<bits/stdc++.h>
using namespace std;

string str(string s)
{
    int n = s.length();

    string output;

    for(int i = 0; i < n; i++)
    {
        int count = 1;
        while(i < n - 1 and s[i] == s[i + 1])
        {
            i++;
            count++;
        }
        output += s[i];
        output += to_string(count);
    }
    if(s.length() < output.length())
    {
        return s;
    }

    return output;
}

int main()
{
    string a = "aaabbbbbbccdeefffg";

    cout<<str(a);

    return 0;
}