#include<iostream>
using namespace std;

bool getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

setBit(int n, int pos){
    return (n | (1 << pos));
}

int uniqueAmongTriplet(int arr[], int n){
    int result = 0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3 != 0){
            result = setBit(result,i);
        }
    }
    return result;
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
    cout<<"Unique element among the triplets in the is "<<uniqueAmongTriplet(arr,n);
    return 0;
}