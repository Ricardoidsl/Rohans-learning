#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    
    cout<< arr<<endl;
    cout<<strlen(arr);
    cout<<sizeof(arr);

    return 0;
}