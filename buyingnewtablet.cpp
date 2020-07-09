
#include<iostream>
using namespace std;
struct tablet{
    int width;
    int height;
    int price;
};

int maxArea(struct tablet *tablets,int noOfAvailableTablets, int budget){
    int maxArea = 0;

    for(int i = 0; i < noOfAvailableTablets; i++){
        if(tablets[i].price <= budget){
            if(maxArea < (tablets[i].width * tablets[i].height)){
                maxArea = (tablets[i].width * tablets[i].height);
            }
        }
    }
    return maxArea;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int noOfAvailableTablets = 0;
        int budget = 0;
        cin>>noOfAvailableTablets>>budget;

        struct tablet *tablets = new struct tablet[noOfAvailableTablets];

        for(int i = 0; i < noOfAvailableTablets; i++){
            cin>>tablets[i].width>>tablets[i].height>>tablets[i].price;
        }

        int area = maxArea(tablets, noOfAvailableTablets, budget);

        (area == 0 ? cout<<"no tablet"<<endl : cout<<area<<endl);
    }
    return 0;
}

