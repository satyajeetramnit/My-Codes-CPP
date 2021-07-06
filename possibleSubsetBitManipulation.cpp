#include<iostream>
using namespace std;

void possibleSubset(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the set :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the set :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The possible subsets are :"<<endl;
    possibleSubset(arr,n);
    return 0;
}