#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::pair;

pair<int, int> sorted(vector <int> arr, int x)
{
    int n = arr.size();
    int s = 0;
    int e = arr.size() - 1;
    int diff = INT_MAX;
    int leftidx, rightidx;

    while( s < e)
   {
    int cs = arr[s] + arr[e];
    if(abs(cs - x) < diff)
    {
        leftidx = s;
        rightidx = e;
        diff = abs(cs - x);
    }
    if( cs < x)
    {s ++;}
    else{e --;}
   }
   cout<<"the array is"<<arr[leftidx]<<","<<arr[rightidx];
   

    return {arr[leftidx], arr[rightidx]};
}

int main()
{
    vector <int> arr = {1, 2, 3, 5, 6};
    int x = 6;

    sorted(arr, x);

    return 0;

}