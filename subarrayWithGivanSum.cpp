#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0,j=0;
    int start=-1;
    int end=-1;
    int reqSum;
    cout<<"Enter the sum for subarray : "<<endl;
    cin>>reqSum;
    int currSum=0;
    
    while (j<n && currSum+a[j] <= reqSum)
    {
        currSum += a[j];
        j++;
    }

    if (currSum==reqSum)
    {
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }
    while (j<n)
    {
        currSum += a[j];
        while (currSum > reqSum)
        {
            currSum -= a[i];
            i++;
        }
        if (currSum == reqSum)
        {
            start = i+1;
            end = j+1;
            break;
        }
        j++;
        
    }
    cout<<start<<" "<<end<<endl;
    

    // //time Complexity = O(n^2)
    // int reqSum;
    // cin>>reqSum;
    // int currSum=0;
    // cout<<"Possible outcomes :"<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         currSum += a[j];
    //         if(currSum>reqSum){
    //         currSum=0;
    //         }
    //         else if(currSum==reqSum){
    //         cout<<i+1<<" "<<j+1<<endl;
    //         break;
    //         }
    //     }
    //     currSum=0;    
    // }
    
    return 0;
}