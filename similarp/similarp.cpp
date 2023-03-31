#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        int nums[len];
        int even = 0;
        int odd = 0;
        
        for(int i = 0; i < len; ++i){
            cin>>nums[i];
            if(nums[i] % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        if(even % 2 == 0){
            cout<<"YES"<<"\n";
        }else{
            sort(nums, (nums+len));
            for(int i = 0; i<(len-1); ++i){
                if(nums[i] + 1 == nums[i+1]){
                    cout<<"YES"<<"\n";
                    break;
                }
                if(i == (len-2)){
                    cout<<"NO"<<"\n";
                }
            }
        }
    }
}