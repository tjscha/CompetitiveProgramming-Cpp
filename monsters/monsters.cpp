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
        long long nums[len];
        long long count=0;
        
        for(long long i = 0; i < len; ++i){
            cin>>nums[i];
        }

        sort(nums, nums+len);

        for(long long i = 0; i<len; ++i){
            if(i == 0){
                count = nums[i] - 1;
                nums[0] = 1;
            }else{
                if(nums[i]>nums[(i-1)]){
                    count += nums[i] - (nums[(i-1)]+1);
                    nums[i] = (nums[(i-1)]+1);
                }
            }
        }
        cout<<count<<"\n";
    }
}