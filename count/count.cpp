#include <iostream>
#include <map>
#include <cassert>

using namespace std;

int main()
{
    int tests;
    cin>>tests;

    while(tests--){
        int len;
        cin>>len;
        int k;
        cin>>k;
        bool possible = true;
        string line;
        cin>>line;
        int indUp = 0;
        int indLo = 0;
        char x;
        int y;
        int count = 0;

        map<char, int> raw;

        for(int i = 0; i<len; i++){
            
            if(raw.find(line.at(i)) != raw.end()){
                y = raw[line.at(i)];
                y++;
                raw[line.at(i)] = y;
            }else{
                raw[line.at(i)] = 1;
            }
        }

        for(const auto& [key, val] : raw){
            
            if(int(key)<91){
                    x = key;
                    x = tolower(x);
                    
                    if(raw.find(x) != raw.end()){
                        y = raw[x];

                        if(val>=y){
                            count += y;
                            raw[key] = val - y;
                        
                            y = 0;
                            raw[x] = y;
                        }else{
                            count += val;
                            y = y-val;
                            raw[x] = y;
                            raw[key] = 0;
                        }
                    }
            }else{
                
            }
            
            cout<< key << " " << val << " "<< count;
        }

        //transform(line.begin(), line.end(), line.begin(), ::toupper);

        //cout<<line;

        if(possible == true){
            cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
      
    }
}