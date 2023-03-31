#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long n;
        cin>>n;
        long long c;
        cin>>c;
        long long d;
        cin>>d;
        set<long long> num;
        long long nums[n];
        long long cost = 0;
        
        for(int i = 0; i < n; ++i){
            cin>>nums[i];
            num.insert(nums[i]);
        }

        cost+= ((n - num.size()) * c);

        long long final[num.size()];
        int k = 0;
        set<long long>::iterator itr;
        for(itr = num.begin(); itr!= num.end(); ++itr){
            final[k] = *itr;
            k++;
        }

        sort(final, final+num.size());

        for(int i = 0; i < sizeof(final)/sizeof(long long); ++i){
            if(i == 0){
                cost+= (final[0] - 1)*d;
            }else{
                if((final[i]-1) == final[(i-1)]){

                }else{
                    long long s = (((sizeof(final)/sizeof(long long)-i)) * c);
                    long long t = (((final[i]-final[(i-1)])-1) * d);
                    if((((sizeof(final)/sizeof(long long))-i) * c) < (((final[i]-final[(i-1)])-1) * d)){
                        cost+=((sizeof(final)/sizeof(long long)-i)*c);
                        break;
                    }else{
                        cost+= ((final[i]-final[(i-1)])-1)*d;

                    }
                }
            }
        }

        cout<<cost<<"\n";
    }
}