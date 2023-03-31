#include <iostream>

using namespace std;

int main()
{
    long long items;
    cin>>items;

    long long divs;
    cin>>divs;
    
    long long nums[items];
    long long totals[items];

    for(long long i = 0; i < items; ++i){
        cin>>nums[i];
        totals[i]=0;
    }

    long long totI = 0;
    long long tempS = nums[0];
    for(long long i = 1; i < items; ++i){
        if((tempS + nums[i]) % 10 < 5){
            tempS += nums[i];
        }else{
            if(divs > 0){
                totals[totI] = tempS;
                tempS = nums[i];
                totI++;
                divs--;
            }else{
                tempS += nums[i];
            }
        }
    }
    totals[totI] = tempS;
    long long count = 0;
    for(long long i = 0; i < items; ++i){
        if(totals[i] % 10 <5){
            count += (totals[i] - (totals[i] % 10));
        }else{
            count += (totals[i] + (10-(totals[i] % 10)));
        }
    }

    cout<<count<<"\n";
}