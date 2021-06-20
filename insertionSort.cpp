#include<iostream>
using namespace std;
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
    for (int i = 1; i < n; i++)
    {
        int counter=arr[i];
        int j=i-1;
        while(arr[j]>counter && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=counter;
    }
    cout<<"Sorted elements are :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}