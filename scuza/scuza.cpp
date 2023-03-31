#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long steps;
        cin>>steps;
        long long quest;
        cin>>quest;

        long long stArr[steps];
        long long quArr[quest];
        long long heights[(steps+1)];
        heights[0] = 0;
        unordered_map<long long, long long> found;
        
        for(long long i = 0; i < steps; ++i){
            cin>>stArr[i];
        }
        for(long long i = 0; i < quest; ++i){
            cin>>quArr[i];
        }
        for(long long i = 1; i <= steps; ++i){
            if(i == 1){
                heights[i] = stArr[0];
            }else{
                heights[i] = (heights[(i-1)] + stArr[(i-1)]);
            }
        }

        for(long long i = 0; i < quest; ++i){
            if(found.find(quArr[i]) == found.end()){
                
                for(long long j = 0; j<steps; ++j){
                    if(quArr[i]>=stArr[j]){
                        if(j == (steps-1)){
                            cout<<heights[(j+1)];
                            found[quArr[i]] = heights[(j+1)];
                                
                        }
                    }else{
                        cout<<heights[j];
                        found[quArr[i]] = heights[j];
                        break;
                    }
                }
            }else{
                cout<<found[quArr[i]];
            }
            cout<<" ";
        }
        cout<<"\n";
    }
}