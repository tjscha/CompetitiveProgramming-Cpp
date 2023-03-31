#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int len;
    long long diff;
    cin>>len>>diff;
    long long nums[len];
    int maxInd = 0;
    long long maxAmt = 0;

    for(int i = 0; i < len; ++i){
        cin>>nums[i];
        if(nums[i]>maxAmt){
            maxInd = i;
            maxAmt = nums[i];
        }
    }
    int x = 0;
    int j = 0;
    for(int i = maxInd; i>0; --i){
        if(nums[i] > nums[i-1]){
            if(nums[i]-nums[i-1] > diff){
                nums[i-1] = nums[i]-diff;
            }
        }else{
            if(nums[i-1]-nums[i] > diff){
                nums[i] = nums[i-1]-diff;
                j = i;
                while((nums[j]-diff) > nums[j+1]){
                    nums[j+1] = (nums[j]-diff);
                    j++;
                }
                if((nums[j+1]-diff) > nums[j]){
                    nums[j] = nums[j+1]-diff;
                }
                
            }
        }
    }
    for(int i = maxInd; i<(len-1); ++i){
        if(nums[i] > nums[i+1]){
            if(nums[i]-nums[i+1] > diff){
                nums[i+1] = nums[i]-diff;
            }
        }else{
            if(nums[i+1]-nums[i] > diff){
                nums[i] = nums[i+1]-diff;
                j = i;
                while((nums[j]-diff) > nums[j-1]){
                    nums[j-1] = (nums[j]-diff);
                    j--;
                }
                if((nums[j-1]-diff) > nums[j]){
                    nums[j] = nums[j-1]-diff;
                }
            }
        }
    }

    for(int i = 0; i<len; ++i){
        cout<<nums[i]<<" ";
    }    
}