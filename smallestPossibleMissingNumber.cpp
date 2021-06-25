// #include "bits/stdc++.h"
#include <iostream>
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
    
    bool check[n];
    for(int i=0;i<n;i++){
        check[i]=false;
    }

     for(int i=0;i<n;i++){
        if(a[i]>0){
            check[i]=true;
        }
    }

    int missingNumber=-1;
    for(int i=0;i<n;i++){
        if(check[i]==false){
            missingNumber=i;
            break;
        }
    }

    cout<<missingNumber<<endl;
  
    // //Time Complexity = O(n^2)
    // int check=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(a[j]==check){
    //             check++;
    //             break;
    //         }
    //     }
    //     if(check==i){
    //         cout<<"Smallest possible missing number is "<<check<<endl;
    //     }
    // }
    return 0;
}