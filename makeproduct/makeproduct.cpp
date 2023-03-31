#include <iostream>
#include <string>

using namespace std;

int main()
{

        long long len;
        cin>>len;
        unsigned long long count = 0;
        long long a;
        bool positive = true;
        bool firstZero = false;

        cin>>a;
        if(a == 0){
                firstZero = true;
        }else if(a > 1){
                count = a - 1;
        }else{
                count = (a + 1)*-1;
                positive = false;
        }

        if(len>1){
            for(int i = 0; i < (len-1); ++i){
                cin>>a;
                if(a == 0){
                    if(firstZero == false){
                        firstZero = true;
                    }else{
                        count = count+1;
                    }
                }else if(a > 0){
                    count = count+(a - 1);
                }else{
                    count = count+((a*-1) - 1);
                    if(positive){
                        positive = false;
                    }else{
                        positive = true;
                    }
                }
            }
        }

        if(firstZero == true){
            count = count + 1;
        }else{
            if(positive){

            }else{
                count = count + 2;
            }
        }

        cout<<count<<"\n";
}