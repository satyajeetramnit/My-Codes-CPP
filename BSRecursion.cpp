#include<iostream>
using namespace std;

int binarySearch(int arr[], int key)
{
    int start=0;
    int end=size;
    if (end >= start) {
        int mid = start + (end - start) / 2;
  
        if (arr[mid] == key)
            return mid;
  
        if (arr[mid] > key)
            return binarySearch(arr, l, mid - 1, key);
  
        return binarySearch(arr, mid + 1, r, key);
    }
  
    return -1;
}

int binarySearch(int targetArr[],int size,int KEY){
    int start=0;
    int end=size;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if (targetArr[mid]==KEY)
        {
            return mid;
        }
        else if (targetArr[mid]<KEY)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
   
    }
    
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key for search : ";
    cout<<"\n";
    cin>>key;
    // binarySearch(arr,n,kay)
    cout<<"Indekey : "<<binarySearch(arr,n,key)<<endl;
    return 0;
}