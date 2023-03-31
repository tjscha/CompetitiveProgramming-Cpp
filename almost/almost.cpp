#include <iostream>

using namespace std;

int main()
{
    int a[50];
    int b[50];
    int c[50];
    int d[50];

    for(int i = 0; i<52; ++i){
        a[i]=1;b[i]=0;c[i]=0;d[i]=1;
        ++i;
        a[i]=0;b[i]=1;c[i]=1;d[i]=0;
        ++i;
        a[i]=0;b[i]=1;c[i]=1;d[i]=0;
        ++i;
        a[i]=1;b[i]=0;c[i]=0;d[i]=1;}
    
    long long tests;
    cin>>tests;

    while(tests--){
        int x;
        cin>>x;
        int y;
        cin>>y;
        
        for(int i = 0; i < x; ++i){
            for(int j = 0; j < y; ++j){
                cout<<a[j]<<" ";
            }
            ++i;
            cout<<"\n";
            for(int j = 0; j < y; ++j){
                cout<<b[j]<<" ";
            }
            ++i;
            cout<<"\n";
            if(i == x){break;}
            for(int j = 0; j < y; ++j){
                cout<<c[j]<<" ";
            }
            ++i;
            cout<<"\n";
            for(int j = 0; j < y; ++j){
                cout<<d[j]<<" ";
            }
            cout<<"\n";

        }
    }
}