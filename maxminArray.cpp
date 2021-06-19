#include<iostream>
#include<climits>
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
    // int max=0;
    // int min=arr[0];
    int maxN=INT_MIN;
    int minN=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i]>max)
        // {
        //     max=arr[i];
        // }
        // if (arr[i]<min)
        // {
        //     min=arr[i];
        // }
        maxN=max(maxN,arr[i]);
        minN=min(minN,arr[i]);
        
    }
    cout<<"Maximum is "<<maxN<<endl;
    cout<<"Minimum is "<<minN<<endl;
    return 0;
}