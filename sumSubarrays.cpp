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
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum=0;
        for(int j=i;j<n;j++){
            currentSum+=arr[j];
            cout<<currentSum<<endl;
            maxSum=max(maxSum,currentSum);
        }
        cout<<"\n";
    }


//Time Complexity = O(n^3)
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int currentSum=0;
    //         for(int k=i;k<=j;k++){
    //         currentSum+=arr[k];
    //         cout<<currentSum<<endl;
    //         }
    //         cout<<"\n";
    //     }
    //     cout<<"\n";
    // }

    return 0;
}