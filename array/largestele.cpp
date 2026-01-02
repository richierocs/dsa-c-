#include<iostream>
using namespace std;

int main(){

    int arr[6]={2,4,3,1,6,5};

    int n=6;
    int largest=arr[n-1];
    int sndlargest=0;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<largest;
    return 0;
}