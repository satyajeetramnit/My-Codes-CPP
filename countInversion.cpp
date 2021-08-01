// Divide And Conquer Count Inversions
// Count the inversions in the given array. 
// Two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

// Brute Force:
// Time Complexity: O(N^2)

// #include<iostream>
// using namespace std;
// int main(){
// int inv = 0;
// for(int i = 0; i < n; i++){
//  for(int j = i + 1; j < n; j++){
//  if(a[i] > a[j])
//  inv++;
//  }
// }
// cout<<inv;
// return 0;
// }

// Time Complexity: O(N logN) 

#include<iostream>
using namespace std;

long long merge(int arr[],int l,int mid,int r){
    long long inversion = 0;

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
        if(a[i] <= b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            inversion += n1-i;
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

    return inversion;
}

long long mergeSort(int arr[],int l,int r){
    long long inversion=0;
    if(l<r){
        int mid=(l+r)/2;
        inversion += mergeSort(arr,l,mid);
        inversion += mergeSort(arr,mid+1,r);
        inversion += merge(arr,l,mid,r);
    }
    
    return inversion;
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
    
    cout<<"Number of inversions in the given array is"<<mergeSort(arr,0,n-1)<<endl;

    return 0;
}