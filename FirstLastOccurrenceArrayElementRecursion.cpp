#include<iostream>
using namespace std;

// Time Complexity: O(N) 
// Space Complexity: O(N) for function call stack

int firstOcc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr,n,i+1,key);
}

int lastOcc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray=lastOcc(arr,n,i+1,key);
    if(restArray != -1){
        return restArray;
    }
    if(arr[i]=key){
        return i;
    }
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
    int key;
    cout<<"Enter the key element to search for :"<<endl;
    cin>>key;
    cout<<"First Occourrence of the key is at position "<<firstOcc(arr,n,0,key)+1<<endl;
    cout<<"Last Occourrence of the key is at position "<<lastOcc(arr,n,0,key)+1<<endl;
    return 0;
}