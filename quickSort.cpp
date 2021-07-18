// Quick sort 
// Idea: Select a random pivot, put it in its correct position, 
// and sort the left and right part recursively. 

// Time Complexity: Avg = O(N logN), Worst Case = O(N^2)

#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
}

int partition(int arr[], int l, int r){
        int pivot=arr[r];
        int i=l-1;

        for(int j=l; j<r; j++){
                if(arr[j]<pivot){
                        i++;
                        swap(arr,i,j);
                }
        }
        swap(arr,i+1,r);
        return i+1;
}

void quickSort(int arr[], int l, int r){
        if(l<r){
                int pi=partition(arr,l,r);
                quickSort(arr,l,pi-1);
                quickSort(arr,pi+1,r);
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
    quickSort(arr,0,n-1);
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}