#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int N = 0;
        cin>>N;

        char name[N][11];
        char surname[N][11];

        unordered_map<string,int> nameMap;

        for(int i = 0; i < N; i++){
            cin>>name[i]>>surname[i];
            if(nameMap.find(name[i]) == nameMap.end()){
                nameMap.insert({name[i],1});
            } else {
                nameMap[name[i]] = nameMap[name[i]] + 1;
            }
        }

        for(int i = 0; i < N; i++){
            if(nameMap[name[i]] > 1){
                cout<<name[i]<<" "<<surname[i]<<endl;
            } else {
                cout<<name[i]<<endl;
            }
        }
    }
    return 0;
}
