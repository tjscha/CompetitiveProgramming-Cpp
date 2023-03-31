#include <iostream>

using namespace std;

int main()
{
    int len;
    cin>>len;
    
    if(len == 2){
        cout<<"NO";
    }
    else if(len%2 == 0){
        cout<<"YES";  
    }else{
        cout<<"NO";
    }
}