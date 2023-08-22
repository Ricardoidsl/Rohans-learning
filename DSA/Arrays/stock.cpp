#include <iostream>
#include <vector>

using namespace std;

int stock(vector <int> arr)
{
    int maxpro = 0;
    int minprice = INT_MAX;
    
    for(int i = 0; i < arr.size(); i++)
    {
        minprice = min(minprice, arr[i]);
        maxpro = max(maxpro, (arr[i] - minprice));
    }
    return maxpro;
}
