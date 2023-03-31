#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        long long index = 1;
        long long x;
        bool found = false;
        
        for(int i = 0; i < len; ++i){
            cin>>x;
            if(x<=index){
                found = true;
            }
            index++;
        }
        if(found){
            cout<<"YES"<<"\n";    
        }else{
            cout<<"NO"<<"\n";
        }
        
    }
}