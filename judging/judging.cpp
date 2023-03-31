#include <iostream>
#include <unordered_map>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    long long len;
    cin>>len;

    unordered_map<string,long long> dom;
    unordered_map<string,long long> kat;

    long long sum = 0;

    string next;
    for(int i = 0; i < len; ++i){
        cin>>next;
        if(dom.find(next) == dom.end()){
            dom[next] = 1;
            kat[next] = 0;
        }else{
            dom[next] += 1;
        }
    }
    for(int i = 0; i < len; ++i){
        cin>>next;
        if(kat.find(next) == kat.end()){
            kat[next] = 1;
        }else{
            kat[next] += 1;
        }
    }

    for(const auto & [key, value] : dom){
        if(value < kat[key]){
            sum += value;    
        }else{
            sum+= kat[key];
        }
    }

    cout<<sum<<"\n";
}