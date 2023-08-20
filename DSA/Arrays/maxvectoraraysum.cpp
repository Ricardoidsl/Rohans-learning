#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::max;

int sum(vector <int> arr, int n)
{
    int cs = 0;
    int ms = 0;
    for(int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if(cs < 0)
        {cs = 0;}

        ms = max(cs, ms);
    }
    return ms;
}

int main()
{

    vector <int> arr = {1, 2, -3, -4, 5, 6};
    int n = arr.size();

    cout<<sum(arr, n);

    return 0;
}
