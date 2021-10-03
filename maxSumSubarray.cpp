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

//Kadane’s Algorithm: Time Complexity: O(N) Space Complexity: O(1)
//Idea: Start taking the sum of the array, as soon as it gets negative,
//discard the current subarray, and start a new sum.
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(currentSum,maxSum);
    }
    if(MaxSum==0){ //if all the elements are -ve
		 sort(arr,arr+n);
		 MaxSum=arr[n-1];
	 }
    cout<<"Maximum Subarray Sum is "<<maxSum<<endl;

	
	
// 		Can also do this
		
//     int maxSubArray(vector<int>& nums) {
//         int sum=0, maxSum=INT_MIN;
//         for(auto it:nums) {
//             sum += it;
//             sum=max(it, sum);
//             if(sum > maxSum)
//                 maxSum=sum;
//         }
//         return maxSum;
//     }


//Prefix Sum Technique: Time Complexity: O(N^2) Space Complexity: O(N)
    // int cumulativeSum[n+1];
    // cumulativeSum[0]=0;
    // for(int i=1;i<=n;i++){
    //     cumulativeSum[i]=cumulativeSum[i-1]+arr[i-1];
    // }
    // int maxSum=INT_MIN;
    // for(int i=1;i<=n;i++){
    //     int sum=0;
    //     maxSum=max(maxSum,cumulativeSum[i]);
    //     for(int j=1;j<=i;j++){
    //         sum=cumulativeSum[i]-cumulativeSum[j-1];
    //         maxSum=max(maxSum,sum);
    //     }
    // }
    // cout<<"Maximum Subarray Sum is "<<maxSum<<endl;


// Time Complexity = O(n^2)    
    // int maxSum=INT_MIN;
    // int currentSum=0;
    // for(int i=0;i<n;i++){
    //     currentSum=0;
    //     for(int j=i;j<n;j++){
    //         currentSum+=arr[j];
    //         maxSum=max(maxSum,currentSum);
    //     }
    // }
    // cout<<"Maximum sum of subarray is "<<maxSum<<endl;


//Brute Force: Time Complexity = O(n^3) Space Complexity: O(1)
    // int maxSum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int currentSum=0;
    //         for(int k=i;k<=j;k++){
    //         currentSum+=arr[k];
    //         }
    //         maxSum=max(maxSum,currentSum);
    //     }
    // }
    // cout<<"Maximum sum of subarray is "<<maxSum<<endl;

    return 0;
}
