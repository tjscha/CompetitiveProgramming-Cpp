#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

void solveTest() {
    int a;
    cin>>a;

    int nums[a];
    //int b;

    for(int i = 0; i<a; i++){
        //cin >> b;
        cin>>nums[i];
        cout<<i;
    }

    int ind = 0;
    set<int> set;

    while(ind < (a-1)){
        for(int j = ind; ind < a; ind++){
            set.insert(nums[j]);
        }
        if((a-ind) == set.size()){
            cout<<ind;
            return; 
        }
        ind += 1;
        set.clear();
    }

    return;
}

int main(){
    int tests;
    cin >> tests;
    while(tests--)
        solveTest();
    return 0;
}