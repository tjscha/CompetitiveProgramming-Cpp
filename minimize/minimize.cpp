#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        long long nums[len];
        long long totsum = 0;
        long long sum = 0;
        
        for(int i = 0; i < len; ++i){
            cin>>nums[i];
            totsum += nums[i];
        }

        long long div;
        int indI = 0;
        int indJ = 0;
        int thick = 2001;
        int tempTh = 0;

        for(int i = 2; i<=len; ++i){
            
            if(totsum % i == 0){
                div = totsum/i;
            
                tempTh = 0;
                indI = 0;
                indJ = 0;

                while(indJ<len){
                    sum = 0;
                    for(int i = indI; i <= indJ; ++i){
                        sum += nums[i];
                    }
                    if(sum == div){
                        if(((indJ-indI)+1) > tempTh){
                            tempTh = ((indJ-indI)+1);
                        }
                        indI = (indJ+1);
                        indJ = indI;
                    }else if(sum > div){
                        break;
                    }else{
                        indJ++;
                    }
                }
                if(indJ == len){
                    if(tempTh < thick){
                        thick = tempTh;
                    }
                }
            }
        }
        if(thick == 2001){
            cout<<len<<"\n";        
        }else{
            cout<<thick<<"\n";
        }
    }
}