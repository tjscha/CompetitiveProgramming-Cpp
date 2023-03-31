#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tests;
    cin>>tests;

    while(tests--){
        int len;
        cin>>len;
        int nums[len];
        //int total = 0;
        bool found;
        found = false;
        string line;
        cin>>line;

        if(len == 1){
            found = true;
            cout<<0<<"\n";
        }

        //cout<<line;
        
        char x;
        for(int i = 0; i < len; i++){
            x = line.at(i);
            
            //cout<<x;

            nums[i] = (int(x)-48);
            //total +=nums[i];

            //cout<<nums[i];
        }
        
        int index = 0;
        int find0 = 0;
        int count=-1;
        int flipper=1;
        if(found == false){  
            while(index<len){
                while(nums[index] != flipper){
                    
                    index++;
                    
                    if(index == len){
                        break;
                    }
                    
                }

                if(flipper == 1){
                    flipper = 0;
                }else{
                    flipper = 1;
                }

                if(index == len){
                    break;
                }

                index++;

                count++;

            }
            if(count == -1){
                count = 0;
            }
            cout<<count<<"\n";
        }   
        
    }
}