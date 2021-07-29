#include<iostream>
#include<climits>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int q = 1e6+2; //why not executable
    int q=1000;
    int index[q];

    for(int i=0;i<q;i++){
        index[i]=-1;
    }

    int minIndex=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(index[arr[i]] != -1)
        {
            minIndex = min(minIndex,index[arr[i]]);
        }
        else
        {
            index[arr[i]]=i;
        }
        
    }

    if (minIndex == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minIndex+1<<endl;
    }

    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array : "<<endl;
//     cin>>n;
//     int arr[n];
//     int q=INT_MIN;

//     cout<<"Enter the elements of the array :"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         q=max(q,arr[i]);
//     }

//     int index[q+1]={};

//     for(int i=0;i<n;i++){
//         index[arr[i]]++;
//     }

//     for(int i=0;i<n;i++){
//         if(index[arr[i]] > 1){
//             cout<<i+1<<endl;
//             return 0;
//         }
//     }

//     cout<<"No repeating elements"<<endl;
//     return 0;
// }

