#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        for(int j = 0; s[j] != '\0'; j++)
        {
            if(s[i] == s[j])
            {
                s.erase(j,1);
            }
        }
    }
    sort(s.begin(), s.end());

    return s;
}