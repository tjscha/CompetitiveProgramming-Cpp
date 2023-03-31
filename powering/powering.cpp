#include <iostream>
#include <stack>

using namespace std;

int main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        stack<long long> stack;
        long long len;
        cin>>len;
        long long power = 0;
        long long x;
        long long temp;

        for(long long i = 0; i < len; ++i){
            cin>>x;
            if(x == 0){
                if(stack.empty()){}
                else{
                    power += stack.top();
                    stack.pop();
                }
            }else{
                if(stack.empty()){
                    stack.push(x);
                }else{
                    if(x>=stack.top()){
                        stack.push(x);
                    }else{
                        stack<long long> tmpSt;
                        while(x<stack.top()){
                            temp = stack.top();
                            tmpSt.push(temp);
                            stack.pop();
                        }
                        stack.push(x);
                        while(tmpSt.empty() == false){
                            temp = tmpSt.top();
                            stack.push(temp);
                            tmpSt.pop();
                        }
                    }
                }
            }
        }

        cout<<power<<"\n";
    }
}