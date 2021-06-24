#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of days : "<<endl;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    cout<<"Enter the no. of visitors each day : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int mx=-1;
    int rbd=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>mx && arr[i]>arr[i+1])
        {
            rbd++;
        }
        mx=max(arr[i],mx);
    }
    cout<<"The number of record breaking day is ";
    cout<<rbd<<endl;

    return 0;
}