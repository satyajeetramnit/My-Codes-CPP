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

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
        
    }

    cout<<"Enter the required sum :"<<endl;
    int key;
    cin>>key;

    int start=0;
    int end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==key){
            cout<<"Pair for target sum are :"<<endl;
            cout<<arr[start]<<" "<<arr[end]<<endl;
            return 0;            
        }
        else if(arr[start]+arr[end]>key){
            end--;
        }
        else{
            start++;
        }
    }


//Brut Force. Time Complexity = O(n^2)
    // int present=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==key){
    //             present++;
    //             cout<<"Indices of the pair for target sum are :"<<endl;
    //             cout<<i<<" "<<j<<endl;
    //         }
    //     }
    // }
    return 0;
}
