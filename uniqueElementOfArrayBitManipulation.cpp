#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int xorSum=0;
    for(int i=0;i<n;i++){
            xorSum = xorSum^arr[i];
    }
    return xorSum;
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
    cout<<"The unique element of the array is "<<unique(arr,n)<<endl;
    return 0;
}