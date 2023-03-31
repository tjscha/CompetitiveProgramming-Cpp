#include <iostream>

using namespace std;

int main()
{

    unsigned long long b;
    cin>>b;
    cout<<25;
}

    unsigned long long a = 5;
    
    unsigned long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    
    string num = to_string(res);
    
    cout<<num.at(num.length()-2)<<num.at(num.length()-1)<<"\n";
}