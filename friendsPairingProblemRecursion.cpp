#include<iostream>
using namespace std;

// Time Complexity: O(n) 
// Space Complexity: O(n)

int pairingWays(int n){   
    if(n==0 || n==1 || n==2){
        return n;
    }
    return pairingWays(n-1)/*if single*/+ pairingWays(n-2)/*if getting laid :)*/;
}

int main(){
    int n;
    cout<<"Enter the number of the friends :"<<endl;
    cin>>n;
    cout<<"The number of ways of pairing them are "<<pairingWays(n)<<endl;
    return 0;
}