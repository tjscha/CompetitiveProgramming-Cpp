#include <iostream>

using namespace std;

void solveTest() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int aGap = b - (c-b);
    if(aGap >= a && aGap % a == 0 && aGap != 0){
        cout << "Yes\n";
        return;
    }
    
    int bGap = a + (c-a)/2;
    if(bGap >= b && (c-a)%2 == 0 && bGap % b == 0 && bGap != 0){
        cout << "Yes\n";
        return;
    }
    
    int cGap = a + 2*(b-a);
    if(cGap >= c && cGap % c == 0 && cGap != 0){
        cout << "Yes\n";
        return;
    }
    
    cout << "No\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--)
        solveTest();
    return 0;
}