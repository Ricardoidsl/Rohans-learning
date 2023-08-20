#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    arr.push_back(16);

    cout<<arr.size()<<endl;

    cout<<arr.capacity()<<endl;

    for(int i = 0; i < arr.size(); i++)
    {cout<<arr[i]<<endl;}

    return 0;
}