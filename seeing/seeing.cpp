#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        string str;
        cin>>str;
        int len = str.size();
        char nums[(len*2)+1];
        nums[(len*2)] = '\0';
        
        for(int i = 0; i < len; ++i){
            nums[i] = str[i];
        }
        int i = len;
        int j = (len-1);
        for(; j >=0; ++i,--j ){
            nums[i] = str[j];
        }
        
        nums[(len*2)+1] = 0;

        cout<<nums<<"\n";
    }
}