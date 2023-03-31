#include <iostream>
#include <vector>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int players;
    int oppTeam;
    cin >> players;
    cin >> oppTeam;
    vector<int> bench;
    int temp;

    for (int i = 0; i<players; i++){
        cin >> temp;
        bench.push_back(temp);
    }

    int wins;
    int teamSize;
    int max;
    int maxInd=0;
    int min;

    while(!bench.empty()){
        maxInd = 0;
        max = 0;
        
        for(auto i = bench.begin(); i != bench.end(); ++i){
            if(i > max){
                max = i;
            }
        }

        if(max > oppTeam){
            wins += 1;
            bench.erase(max);
        }else{
            
            if(oppTeam%max == 0){
                teamSize = oppTeam/max;
            }else{
                teamSize = (oppTeam/max)+1;
            }

            if(teamSize <= bench.size()){
                wins += 1;
                bench.erase(maxInd);
                min = 1000000001;
                for (int i = 0; i<(teamSize-1); i++){
                    for(int i = 0; i<bench.size();i++){
                        if(bench[i] < bench[min]){
                            min = i;
                        }
                    }
                    bench.erase(min);

                }
            }else{
                cout << wins << "\n";
                return 0;                
            }
        }
    }

    cout << wins << "\n";
    return 0;
}