#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        long long nums[len];
        long long maxNum = 0;
        long long maxInd = 0;
        long long totSum = 0;
        long long divs = 0;
        bool moreDiv = true;
        
        for(int i = 0; i < len; ++i){
            cin>>nums[i];
        }

        while(divs > 1){
            divs = 1;
            maxInd = 0;
            maxNum = 0;

            for(int i = 0; i < len; ++i){
                if(nums[i] % 2 == 0){
                    divs++;
                    nums[i] = (nums[i]/2);

                }
                if(nums[i] > maxNum){
                        maxInd = i;
                        maxNum = nums[i];
                    }
            }
            nums[maxInd] = pow(nums[maxInd],divs);
        }

        for(int i = 0; i < len; ++i){
            totSum += nums[i];   
        }
        cout<<totSum<<"\n";
    }
}