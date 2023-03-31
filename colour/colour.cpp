#include <iostream>

using namespace std;

int main()
{
    
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        string str1;
        cin>>str1;
        string str2;
        cin>>str2;
        bool match = true;
        int one;
        int two;
        
        for(int i = 0; i < len; ++i){
            if(str1[i] == 'R'){
                one = 1;
            }else{
                one = 0;
            }
            if(str2[i] == 'R'){
                two = 1;
            }else{
                two = 0;
            }
            if(one != two){
                match = false;
                break;
            }
        }
        if(match){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}