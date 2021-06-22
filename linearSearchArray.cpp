#include<iostream>
using namespace std;

int linearSearch(int targetArr[],int size,int KEY){
    for (int i = 0; i < size; i++)
    {
        if (targetArr[i]==KEY)
        {
            return i;
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
    // linearSearch(arr,n,kay)
    cout<<"Index : "<<linearSearch(arr,n,key)<<endl;
    return 0;
}