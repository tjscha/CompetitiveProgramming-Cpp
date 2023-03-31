#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long ans;
        cin>>ans;
        long long l;
        long long r;
        
        if(ans % 2 == 0){
            l = ans-((ans*2)-1);
            r = ans;
        }else{
            if(ans == 1){
                l = 0;
                r = 1;
            }else{
                l = ans/2;
                r = l+1;
            }
        }
        cout<<l<<" "<<r<<"\n";
    }
}