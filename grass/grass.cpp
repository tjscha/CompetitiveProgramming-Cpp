#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        int a,b,c,d,sum;
        cin>>a>>b>>c>>d;
        sum = a+b+c+d;

        if(sum == 4){
            cout<<2<<"\n";
        }else if(sum == 0){
            cout<<0<<"\n";
        }else{
            cout<<1<<"\n";
        }
    }
}