#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        long long num;
        cin>>num;
        long long a;
        long long b;
        bool aFou = false;
        bool bFou = false;
        
        for(long long i = 0; i < len; ++i){
            cin>>a;
            cin>>b;
            if(a == num){
                aFou = true;
            }
            if(b == num){
                bFou = true;
            }
        }

        if(aFou&&bFou){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}
