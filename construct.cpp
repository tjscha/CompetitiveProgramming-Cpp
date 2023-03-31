#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

void solveTest() {
    int a,b,c;
    cin >> a >> b >> c;
    
    set<int> nums;
    nums.insert(a);
    if(nums.find(b) == nums.end()){
        nums.insert(b);
    }else{
        nums.erase(a);
    }
    if(nums.empty()){
        if(c % 2 == 0){
            cout << "Yes\n";
            return;
        }
    }else if(a == c){
        nums.erase(a);
        nums.erase(c);
        if(b % 2 == 0){
            cout << "Yes\n";
            return;
        }
    }else if(b == c){
        nums.erase(b);
        nums.erase(c);
        if(a % 2 == 0){
            cout << "Yes\n";
            return;
        }
    }else{
        nums.insert(c);
    }

    set<int>::iterator it = nums.begin();
    int arr[nums.size()];
    for(int i = 0; i < nums.size(); i++){
        arr[i] = *it;
        it++;
    }

    if(arr[2] - (arr[0]+arr[1]) == 0){
        cout << "Yes\n";
        return;
    }

    cout << "No\n";
    return;



    cout << a << "\n";
    return;
}

int main(){
    int tests;
    cin >> tests;
    while(tests--)
        solveTest();
    return 0;
}