#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int len;
    cin>>len;
    stack<int> one;
    stack<int> two;
    stack<int> three;
    int x;
    int count = 0;
    vector<int> vec;
    for(int i = 0; i < len; ++i){
        cin>>x;
        one.push(x);
    }
    while(!one.empty()){
        if(three.empty()){
            if(two.empty()){
                x = one.top();
                one.pop();
                two.push(x);

                vec.push_back(1);
                vec.push_back(2);
                count++;    
            }else if(one.top() < two.top()){
                x = one.top();
                one.pop();
                two.push(x);

                vec.push_back(1);
                vec.push_back(2);
                count++;
            }else{
                x = one.top();
                one.pop();
                three.push(x);

                vec.push_back(1);
                vec.push_back(3);
                count++;
                  
            }
        }else if(one.top() < three.top()){
            
            x = one.top();
            one.pop();
            three.push(x);

            vec.push_back(1);
            vec.push_back(3);
            count++;
        }else if(one.top() > three.top()){
            while(one.top() > three.top()){
                
                x = three.top();
                three.pop();
                two.push(x);

                vec.push_back(3);
                vec.push_back(2);
                count++;
                if(three.empty()){
                    break;
                }
            }
            x = one.top();
            one.pop();
            three.push(x);

            vec.push_back(1);
            vec.push_back(3);
            count++;

            while(!two.empty()){
                x = two.top();
                two.pop();
                three.push(x);

                vec.push_back(2);
                vec.push_back(3);
                count++;
            }
        }
        if(!two.empty() & !three.empty()){
            while(!two.empty()){
                if(three.top()-two.top() ==  1){
                
                    x = two.top();
                    two.pop();
                    three.push(x);

                    vec.push_back(2);
                    vec.push_back(3);
                    count++;
                }else{
                    
                    x = two.top();
                    two.pop();
                    one.push(x);

                    vec.push_back(2);
                    vec.push_back(1);
                    count++;
                }
            }
        }

    }
    cout<<count<<"\n";
    string y;
    for(auto i = vec.begin(); i != vec.end(); ++i){
        int a = *i++;
        int b = *i;
        
        string first = to_string(a);
        string second = to_string(b);
        cout << first +" "+ second << endl;
    }
}