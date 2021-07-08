#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return ((n & (1 << pos))!=0); 
}

void twoUnique(int arr[], int n){
    int xorSum = 0;
    for(int i=0;i<n;i++){
        xorSum = xorSum^arr[i];
    }
    int tempXor=xorSum;
    int pos=0;
    int setbit=0;
    while(setbit!=1){
        setbit=xorSum & 1;
        pos++;
        xorSum=xorSum >> 1;
    }
    int newXor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            newXor=newXor^arr[i];
        }
    }
    cout<<newXor<<endl;
    cout<<(tempXor^newXor)<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    twoUnique(arr,n);
    return 0;
}