#include <iostream>
#include <map>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        long long damage;
        cin>>damage;

        map<long long, long long> sort;
        long long health[len];
        long long power[len];
        long long maxH = 0;

        long long minP = LONG_LONG_MAX;

        for(long long i = 0; i < len; ++i){
            cin>>health[i];
            if(health[i] > maxH){
                maxH = health[i];
            }
            
        }
        for(long long i = 0; i < len; ++i){
            cin>>power[i];
            
            sort[power[i]] = 0;
        }

        long long cutOff = damage;

        for(; cutOff < maxH; ++cutOff){

        }


        if(damage > 0){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}