#include<bits/stdc++.h>
using namespace std;

vector<int> grow(int row)
{
    long long ans = 1;
    vector <int> ansrow;
    ansrow.push_back(1);
    for( int i = 1; i < row; i++)
    {
        ans = ans*(row - i);
        ans = ans/(i);
        ansrow.push_back(ans);
    }
    return ansrow;
}

vector<vector <int>> pascaltriangle(int n)
{
    vector<vector <int>> ans;
    for(int i = 1; i < n; i++)
    {
        ans.push_back(grow(i));
    }
    return ans;
}