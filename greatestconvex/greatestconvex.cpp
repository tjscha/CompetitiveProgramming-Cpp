#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n){
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long k;
        cin>>k;
        long long x = factorial(k-1);
        for(long long i = k-1; i > 0; --i){
            cout<<x<<"\n";
            if((x+(x/i))%k == 0){
                x = i;
                break;
            }
            x = x/i;
        }
        if(x == 1){
            cout<<-1<<"\n";    
        }else{
            cout<<x<<"\n";
        }
    }
}