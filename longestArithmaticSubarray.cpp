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

    int pd=arr[1]-arr[0];
    int cas=1;
    int las=2;

     for (int i = 1; i < n; i++)
    {
        if (pd==arr[i]-arr[i-1])
        {
            cas++;
        }
        else
        {
            pd=arr[i]-arr[i-1];
            cas=2;
        }
        if (cas>las)
        {
            las=cas;
        }
        
        
    }
    cout<<"The length of the longest arithmatic subarray is ";
    cout<<max(cas,las)<<endl;

    return 0;
}