#include<iostream>
using namespace std;

double getProbability(int arr[],int n){
    int count2 = 0, count1 = 0, iMax = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            count2++;
            if(iMax < (arr[i] + arr[j]))
            {
                iMax=arr[i]+arr[j];
                count1=1;
            }
            else if(iMax==arr[i]+arr[j])
                count1++;
        }
    }
    return ((double)count1/(double)count2);
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;

        cin>>n;

        int *arr = new int[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        printf("%lf\n",getProbability(arr,n));
    }
    return 0;
}

