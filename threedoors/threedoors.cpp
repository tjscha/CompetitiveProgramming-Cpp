#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin>>tests;

    while(tests--){
        
        bool possible = true;
        int hand;
        cin>>hand;
        int nums[3];
        int key;
        
        for(int i = 0; i < 3; ++i){
            cin>>key;
            nums[i] = key;
        }

        hand--;
        hand = nums[hand];
        if(hand == 0){
            possible = false;
        }
        hand--;
        hand = nums[hand];
        if(hand == 0){
            possible = false;
        }

        if(possible == true){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}