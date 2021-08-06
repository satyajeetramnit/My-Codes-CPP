// Merge sort - 
// Idea: Divide the array into two parts,
// sort the left part and sort the right part and merge them. 

// Time Complexity: O(N logN) 
// Space Complexity: O(N) Since we need an arbitrary array as well.

#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];  //temp arrays

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        if(a[i]>b[j]){
            arr[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    
    while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    mergeSort(arr,0,n-1);
    cout<<"Sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // int arr[5]={5,4,2,3,1};
    // mergeSort(arr,0,4);
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}