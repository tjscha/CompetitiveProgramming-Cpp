#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;

        long long div = pow(2 , len);

        long long nums[len];

        long long total = 1;
        
        for(int i = 0; i < len; ++i){
            cin>>nums[i];
            total = total * nums[i];
        }

        long long j = 1;
        while(total % div != 0){
            tot
        }



        //cout<<count<<"\n";
    }
}