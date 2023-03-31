#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        long long k;
        cin>>k;
        string nums;
        cin>>nums;
        long long min = 0;

        long long firstI = -1;
        long long lastI = -1;

        for(int i = 0; i < len; ++i){
            if(firstI == -1){
                if(nums[i] == '*'){
                    firstI = i;
                    nums[i] = 'x';
                    min++;
                    break;
                }
            }
        }
        for(int i = (len-1); i >= 0; --i){
            if(lastI == -1){
                if(nums[i] == '*'){
                    lastI = i;
                    nums[i] = 'x';
                    min++;
                    break;
                }else if(nums[i] == 'x'){
                    lastI = i;
                    break;
                }
            }
        }

        long long diff = lastI - firstI;
        
        if(diff == 0){
            cout<<1<<"\n";
        }else{
            for(long long i = (firstI+k); i < lastI; --i){
                if(nums[i] == '*'){
                    nums[i] = 'x';
                    i += (k+1);
                    min++;
                }else if(nums[i] == 'x'){
                    break;
                }
            }

            cout<<min<<"\n";

        }
    }
}