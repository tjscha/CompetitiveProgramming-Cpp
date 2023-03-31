#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        long long neg[len];
        long long pos[len];
        long long x;
        long long pI = 0;
        long long nI = 0;
        long long pSum = 0;
        long long nSum = 0;

        for(int i = 0; i < len; ++i){
            cin>>x;
            if(x >= 0){
                pos[pI] = x;
                pI++;
                pSum += x;
            }else{
                neg[nI] = x;
                nI++;
                nSum += x;
            }
        }

        x = abs(pSum - abs(nSum));

        cout<<x<<"\n";
    }
}