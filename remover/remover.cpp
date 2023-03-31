#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<set>
using namespace std;

int main(){
    int tests;
    cin>>tests;
    while(tests--){
        int a;
        cin>>a;

        int nums[a];

        for(int i = 0; i<a; i++){
            cin>>nums[i];
        }

        int ind = 0;
        set<int> set;

        while(ind < (a-1)){
            for(int j = ind; ind < a; ind++){
                set.insert(nums[j]);
            }
            if((a-ind) == set.size()){
                cout << ind; 
            }
            ind++;
            set.clear();
        }
    }
}