#include <iostream>
#include <vector>

using std::cout;
using std::max;
using std::vector;
using std::endl;

int lower(vector <int> arr, int value)
{
    int ans = -1;
    int s = 0;
    int e = arr.size() - 1;
    
    while(s <= e)
    {
        int mid;
        mid = (s + e)/2;
        if(arr[mid] <= value)
        {
            ans = arr[mid];
            s = mid + 1; 
        }
        else
        {
            e = mid - 1;
        }
}return ans;
}
/*
int lowerbound(int arr[], int n, int value)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while( s <= e)
    {    
        mid = (s + e/ 2)
        if(arr[mid] <= value)
        {
            ans = arr[mid];
            s= mid + 1;

        }
        else
        {e = mid - 1;}

    }
}
*/
int main()
{
    vector <int> arr = {1, 2, 3, 5, 6};
    int value = 6;

    cout<<lower(arr, value);

    return 0;


}