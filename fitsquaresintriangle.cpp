#include<iostream>
using namespace std;

int find_squares(int b) {
  int squares = 0;
  if(b < 4) {
    return 0;
  } else {
    squares = b/4;
    b -= squares * 2;
    squares = squares * squares;
    return squares + 2 * find_squares(b);
  }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no;
        cin>>no;
        cout<<find_squares(no)<<endl;
    }
    return 0;
}

