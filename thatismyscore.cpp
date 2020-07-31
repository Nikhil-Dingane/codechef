#include<iostream>
using namespace std;

struct score{
    int noOfSubmission;
    int points;
};


int maxScore(struct score *arr, int arrSize){
   struct score scores[8] = {};
   int playerMaxScore = 0;

   for(int i = 0; i < arrSize; i++){
        if((arr[i].noOfSubmission <= 8) && (arr[i].noOfSubmission >=1)){
            if(scores[arr[i].noOfSubmission - 1].points < arr[i].points) {
                playerMaxScore = playerMaxScore - scores[arr[i].noOfSubmission - 1].points;
                playerMaxScore = playerMaxScore + arr[i].points;
                scores[arr[i].noOfSubmission - 1].points = arr[i].points;
            }
        }
   }
   return playerMaxScore;
}


int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int arrSize = 0;
        cin>>arrSize;

        struct score scores[arrSize];

        for(int i = 0; i < arrSize; i++){
            cin>>scores[i].noOfSubmission>>scores[i].points;
        }
        cout<<maxScore(scores,arrSize)<<endl;

    }
    return 0;
}

