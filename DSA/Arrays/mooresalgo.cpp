// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int elem(vector <int> arr)
{
    int cnt = 0;
    int el;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(cnt == 0)
        {
            el = arr[i];
            cnt = 1;
        }
        else if(el == arr[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(el == arr[i])
        {
            cnt1++;
        }
        if(cnt1 > arr.size()/2)
        {
            return el;
        }
        return -1;
    }
}
    