#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solveTest() {
    int a;
    cin >> a;
    unsigned long long int arr[a];

    bool foundOdd = false;

    for(int i = 0; i<a; i++){
        cin >> arr[i];
    }
    unsigned long long int odMin = 9999999999999999999;
    unsigned long long int evMin = 9999999999999999999;

    for(int i = 0; i<a; i++){
        if((i+1) % 2 == 0){
            if(arr[i]<evMin){
                evMin = arr[i];
            }
        }else{
            if(arr[i]<evMin){
                odMin = arr[i];
            }
        }
    }
    //check even
    for(int j = 1; j<=evMin; j++){    
        for(int i = 0; i<=evMin; i+=2){
            
            if()
            
        }
    }

    
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