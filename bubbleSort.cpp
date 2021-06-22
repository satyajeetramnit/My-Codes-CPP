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
    int counter=0;
    while (counter<n-1)
    {
        for (int i = 0; i < n-counter-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            
        }
        counter++;
    }
    
    cout<<"Sorted elements are :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}