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
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of the elements of the given array is "<<sum<<endl;
    return 0;
}