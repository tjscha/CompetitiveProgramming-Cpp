#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    long long bouq = 0;
    sort(arr,arr+3);

    long long min = arr[0]%3;

    bouq += (min);
    arr[0] -= min;
    arr[1] -= min;
    arr[2] -= min;

    bouq += (arr[0]/3)*3;

    
    arr[1] -= (arr[0]/3)*3;
    arr[2] -= (arr[0]/3)*3;
    arr[0] -= (arr[0]/3)*3;

    bouq += (arr[1]/3);
    bouq += (arr[2]/3);

    cout<<bouq<<"\n";
}