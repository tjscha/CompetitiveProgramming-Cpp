#include <iostream>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        unsigned long long len;
        cin>>len;
        unsigned long long count;
        cin>>count;
        unsigned long long nums[len];
        unsigned long long amt = 0;
        
        for(unsigned long long i = 0; i < len; ++i){
            cin>>nums[i];
            if(nums[i] == 1){
                amt++;
            }
        }

        if(count == amt){
            cout<<0<<"\n";  
        }else if(amt<count){
            cout<<-1<<"\n";
        }else{
            unsigned long long j = (len-1);
            unsigned long long remove = 0;
            unsigned long long i = 0;
            unsigned long long lastI = 0;
            unsigned long long lastJ = 0;
            while(true){
                for(; nums[i] != 1; ++i){}
                for(; nums[j] != 1; --j){}
                if(i<= (len-1)-j){
                    amt--;
                    i++;
                    lastI = i;
                    
                }else{
                    amt--;
                    j--;
                    lastJ = (len-1)-j;
                }
                if(count == amt){
                    remove = lastI+lastJ;
                    cout<<remove<<"\n";
                    break;
                }
            }
        }
    }
}