#include <iostream>
#include <map>

using namespace std;

 struct Candy{
    long long num;
    long long price;
    map<long long, long long> tags;
    public:
    void getNums();
};
void Candy::getNums(){
    long long nums;
    cin>>nums;
    long long price;
    cin>>price;
}
map<long long,long long> makeMap(map<long long,long long> tags, long long numN, long long price){
    for(long long i = 2; i <=numN; ++i){
        if(numN % i == 0){
            if(tags.find(i) == tags.end()){
                tags[i] = 1;
            }else{
                tags[i] += 1;
            }
        }
    }
    for(pair<long long, long long> prod : tags){
        if(numN % prod.first != 0){
            prod.second = 0;
        }
    }

}
main()
{
    long long tests;
    cin>>tests;

    while(tests--){
        long long len;
        cin>>len;
        Candy nums[len];
        
        for(int i = 0; i < len; ++i){
            if(i == 0){
                Candy tmp;
                tmp.getNums();
                nums[i] = tmp;
                tmp.tags = makeMap(tmp.tags, tmp.num, tmp.price);
            }else{
                Candy tmp;
                tmp.getNums();
                nums[i] = tmp;
                nums[i].tags = nums[(i-1)].tags;
                tmp.tags = makeMap(tmp.tags, tmp.num, tmp.price);
            }
        }

        //cout<<count<<"\n";
    }
}