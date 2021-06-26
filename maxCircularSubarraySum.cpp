#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(currentSum,maxSum);
    }
    return maxSum;
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

    int circularSum;
    int noncircularSum;

    noncircularSum=kadane(arr,n);

    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    
    circularSum = totalSum + kadane(arr,n);

    cout<<"Maximum Circular Subarray Sum is "<<max(circularSum,noncircularSum)<<endl;
    return 0;
}