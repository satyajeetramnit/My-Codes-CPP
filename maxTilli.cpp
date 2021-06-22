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
    int maxN=INT_MIN;
    int limit;
    cout<<"Enter i :"<<endl;
    cin>>limit;
    for (int i = 0; i <= limit; i++)
    {
        maxN=max(maxN,arr[i]);
    }
    cout<<"Maximum till i is "<<maxN<<endl;
    return 0;
}