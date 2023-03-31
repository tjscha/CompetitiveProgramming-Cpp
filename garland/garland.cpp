#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        string str;
        cin>>str;
        unordered_map<char,int> chars;

        chars[str[0]] = 1;
        if(chars.find(str[1]) == chars.end()){
            chars[str[1]] = 1;
        }else{
            chars[str[1]] = 2;
        }
        if(chars.find(str[2]) == chars.end()){
            chars[str[2]] = 1;
        }else{
            chars[str[2]] += 1;
        }
        if(chars.find(str[3]) == chars.end()){
            chars[str[3]] = 1;
        }else{
            chars[str[3]] += 1;
        }

        if(chars.size() == 1){
            cout<<-1<<"\n";
        }else if(chars.size() == 2){
            if(chars[str[0]] == 2){
                cout<<4<<"\n";
            }else{
                cout<<6<<"\n";
            }
        }else if(chars.size() == 3){
            cout<<4<<"\n";
        }else{
            cout<<4<<"\n";
        }
    }
}