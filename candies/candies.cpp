#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long n;
        cin>>n;
        int nums[40];
        
        long long temp = n;
        int i = 0;

        if(n%2!=0){
            while(temp > 1){
                if((temp+1)/2 % 2 == 0){
                    nums[i] = 2;
                    temp = (temp-1)/2;
                }else{
                    nums[i] = 1;
                    temp = (temp+1)/2;
                }
                i++;
                if(i == 40){
                    break;
                }
            }
        }
        if(n%2 == 0){
            cout<<-1<<"\n";
        }else if(i<40){
            cout<<i<<"\n";
            for(int j = (i-1); j>=0; --j){
                cout<<nums[j]<<" ";
            }
            cout<<"\n";
        }else{
            cout<<-1<<"\n";
        }
    }
}