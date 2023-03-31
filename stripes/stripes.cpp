#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;
    string line;

    while(tests--){
        int vertB[8] = {0,0,0,0,0,0,0,0};
        bool foundB = false;
        bool foundR = false;
        bool found = true;
        char letter;

        for(int i = 0; i < 8; ++i){
            int arr[1] = {0};

            for(int j = 0; j < 8; ++j){
                
                cin>>letter;

                if(letter == 'B'){
                    vertB[j] += 1;
                    if(vertB[j] == 8){
                        foundB = true;
                    }
                }else if(letter == 'R'){
                    arr[0] += 1;
                }
            }
            if(arr[0] == 8){
                foundR = true;
            }
        }
        if(foundR){
            cout<<"R"<<"\n";
        }else{
            cout<<"B"<<"\n";
        }
    }
}
