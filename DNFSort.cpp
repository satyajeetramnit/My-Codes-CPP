// DNF Sort:
// Given an array containing only 0,1 and 2. 
// You have to sort the array in O(N) time, single pass, and O(1) space.
// Input: Given an array, containing only 0,1, and 2. 
// Output: print the sorted array. 

// Time Complexity: O(N), single pass Space Complexity: O(1)

#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void dnf(int arr[], int n){
    int mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;
            mid++;
        }

        else if(arr[mid]==1){
            mid++;
        }

        else{
            swap(arr,mid,high);
            high--;
        }
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
    dnf(arr,n);
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}