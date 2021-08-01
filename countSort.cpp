// Counting Sort:
// The O(N) sort. 
// Note: Only limited to small positive integers only. 
// Input: Given an array. 
// Output: print the sorted array. 
// Time Complexity: O(N) 
// Space Complexity: O(max(Arr))

#include<iostream>
using namespace std;

void countSort(int arr[], int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }

    int count[k]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1;i<=k;i++){
        count[i] += count[i-1];
    }
    
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countSort(arr,n);
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}