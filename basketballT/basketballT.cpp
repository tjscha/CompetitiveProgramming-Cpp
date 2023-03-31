#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long players;
    cin>>players;
    long long enemy;
    cin>>enemy;
    long long wins;

    long long nums[players];
    
    for(int i = 0; i < players; ++i){
        cin>>nums[i];
    }
    int len = sizeof(nums)/sizeof(nums[0]);
    sort(nums,nums+len);

    int beginInd = -1;
    int endInd = (players-1);
    int size;

    while(beginInd<endInd){
        size = enemy/nums[endInd];
        size;
        beginInd += size;
        if(beginInd<endInd){
            wins++;
        }
        endInd--;
    }


    cout<<wins<<"\n";
}