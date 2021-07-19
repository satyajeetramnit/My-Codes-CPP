#include<iostream>
using namespace std;

// Time Complexity: O(N) 
// Space Complexity: O(N), for the call stack


// int increasingOrder(int n){
//     if(n==0){
//         return 0;
//     }
//     increasingOrder(n-1);
//     cout<<n<<" ";
//     return 0;
// }

// int decreasingOrder(int n){
//     if(n==0){
//         return 0;
//     }
//     cout<<n<<" ";
//     return decreasingOrder(n-1);
// }

void increasingOrder(int n){
    if(n==1){
        cout<<"1 ";
        return;
    }
    increasingOrder(n-1);
    cout<<n<<" ";
}

void decreasingOrder(int n){
    if(n==1){
        cout<<"1";
        return;
    }
    cout<<n<<" ";
    decreasingOrder(n-1);
}

int main(){
    int n;
    cout<<"Enter the limit to print all natural number :"<<endl;
    cin>>n;
    cout<<"Increasing Order :"<<endl;
    increasingOrder(n);
    cout<<endl;
    cout<<"Decreasing order :"<<endl;
    decreasingOrder(n);
    return 0;
}