// check if the aray is sorted or not 

#include<iostream>
using namespace std;

int main(){

    int arr[6]={1,2,3,4,5,6};

    bool issorted=true;

    for(int i=0;i<6-1;i++){
            if(arr[i]>arr[i+1]){
                issorted=false;
            }
    }

    if(issorted){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }

    return 0;
}