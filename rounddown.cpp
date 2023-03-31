#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
void solveTest() {
    int a;
    cin >> a;
 
    int len = std::to_string(a).length();
 
    string nOut = ("1");
 
    for( int i = 1; i<len; i++){
        nOut = nOut + "0";
    }
 
    int baseTen = stoi(nOut);
 
    a = a - baseTen;
    
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