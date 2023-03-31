#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int tests;
    cin>>tests;

    while(tests--){
        int len;
        cin>>len;
        bool possible = true;
        string line;
        cin>>line;
        int index = 0;

        transform(line.begin(), line.end(), line.begin(), ::toupper);

        //cout<<line;

        if(len < 4){
            possible = false;
        }
        if(possible == true){
            if(line.at(0) == 'M'){

                while (line.at(index) == 'M')
                {
                    index++;
                    if(index == len){
                        possible = false;
                        break;
                    }
                    if(line.at(index) == 'M'){
                    }else if(line.at(index) == 'E'){
                    }else{
                        possible = false;
                        break;
                    }    
                }

            }else{
                possible = false;
            }

            if(possible == true){
                
                while (line.at(index) == 'E')
                {
                    index++;
                    if(index == len){
                        possible = false;
                        break;
                    }
                    if(line.at(index) == 'E'){
                    }else if(line.at(index) == 'O'){
                    }else{
                        possible = false;
                        break;
                    }    
                }
            }

            if(possible == true){
                
                while (line.at(index) == 'O')
                {
                    index++;
                    if(index == len){
                        possible = false;
                        break;
                    }
                    if(line.at(index) == 'O'){
                    }else if(line.at(index) == 'W'){
                    }else{
                        possible = false;
                        break;
                    }    
                }
            }

            if(possible == true){
                
                while (index<len)
                {
                    index++;
                    if(index == len){
                        break;
                    }
                    if(line.at(index) == 'W'){
                    }else{
                        possible = false;
                        break;
                    }    
                }
            }
        }
        
        if(possible == true){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
      
    }
}