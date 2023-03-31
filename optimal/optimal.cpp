#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin>>tests;

    while(tests--){
        long long row;
        cin>>row;
        long long col;
        cin>>col;
        long long score = 0;

        for(int i = 1; i <= col; ++i){
            score += i;
        }

        for(int i = 1; i < row; ++i){
            score += (i*col)+col;
        }

        cout<<score<<"\n";
    }
}