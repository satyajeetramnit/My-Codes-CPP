#include<iostream>
using namespace std;

// Time Complexity: O(n log log n) 
// Space Complexity: O(n)

void sievePrime(int n){
    int prime[n+1] = {0}; 
    for(int i=2;i<=n;i++){
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                prime[j] = 1;
            }
        }
    }
    cout<<"Prime numbers until the given limit are :"<<endl;
    for(int i=2;i<=n+1;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter the limit :"<<endl;
    cin>>n;
    sievePrime(n);
    return 0;
}