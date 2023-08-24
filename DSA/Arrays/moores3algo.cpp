#include <vector>
#include <iostream>

using namespace std;

vector <int> ntimes(vector <int> arr)
{
    int cnt1 = 0;
    int cnt2 = 0;
    int el1;
    int el2;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(cnt1 == 0 and arr[i] != el2)
        {
            cnt1 = 1;
            el1 = arr[i];
        }
        else if(cnt2 == 0 and arr[i] != el1)
        {
            cnt2 = 1;
            el2 = arr[i];
        }
        else if(arr[i] == el1)
        {
            cnt1++;
        }
        else if(arr[i] == el2)
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    vector <int> ls;
    cnt1 = 0;
    cnt2 = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == el1)
        {
            cnt1++;
        }
         if(arr[i] == el2)
        {
            cnt2++;
        }
    }
    int mini = (arr.size()/3 + 1);
    if(cnt1 >= mini)
    {
        ls.push_back(el1);
    }
     if(cnt2 >= mini)
    {
        ls.push_back(el2);
    }
    
    return ls;
}