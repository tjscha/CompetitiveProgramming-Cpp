#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int tests;
    cin>>tests;

    while(tests--){
        int len;
        cin>>len;
        //int zeroCount = 0;
        bool descending = false;
        int index = 0;
        int operations = 0;
        int x = 0;
        int y = 0;
        int arr[len];
        
        for(int i = 0; i < len; ++i){
            cin>>y;
            arr[i] = y;
            if(x>0){
                if(y<x){
                    index = i;
                    descending = true;
                }
            }
            x = y;
        }
        if(descending == false){
            cout<<0<<"\n";
        }else{
            set<int> count;
            for(int i = 0; i<index; ++i){
                if(arr[i] == 0){
                }else{
                    count.insert(arr[i]);
                }
            }

            for(int i = index; i<len; ++i){
                auto pos = count.find(arr[i]);
                if(pos != count.end()){
                    index = i;
                }
            }

            for(int i = 0; i<index; ++i){
                if(arr[i] == 0){
                }else{
                    count.insert(arr[i]);
                }
            }

            operations = count.size();

            cout<<operations<<"\n";
        }
    }
}