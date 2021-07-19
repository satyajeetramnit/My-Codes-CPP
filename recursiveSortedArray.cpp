#include<iostream>
using namespace std;

// Time Complexity: O(N) 
// Space Complexity: O(N) for function call stack

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    return(arr[0]<=arr[1] && sorted(arr+1,n-1));
}

int main(){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sorted(arr,n)){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Sorted test DISQUALIFIED."<<endl;
    }
    return 0;
}