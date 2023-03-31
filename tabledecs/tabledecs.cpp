#include <iostream>

using namespace std;

int main()
{

        unsigned long long arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        int minInd = 0;
        unsigned long long minAmt = arr[0];
        unsigned long long tables = 0;

        for(int i=1; i<3; ++i){
            if(arr[minInd]>arr[i]){
                minInd = i;
                minAmt = arr[minInd];
            }
        }
        int zeroCount = 0;

        tables = minAmt;

        for(int i=0; i<3; ++i){
            if(minAmt>0){
                arr[i] = arr[i] - minAmt;
            }
            if(arr[i] == 0){
                zeroCount+=1;
            }
        }
        
        if(zeroCount<2){
            if((arr[0]+arr[1]+arr[2]) > 2){
                minInd = 0;
                minAmt = 2000000001;
                for(int i=0; i<3; ++i){
                    if(arr[i]>0){
                        if(arr[i]<minAmt){
                            minInd = i;
                            minAmt = arr[minInd];
                        }
                    }
                }

                tables = tables + minAmt;

            }
        }
        cout<<tables;

}