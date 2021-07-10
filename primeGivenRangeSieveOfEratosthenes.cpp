#include<iostream>
using namespace std;

// Time Complexity: O(n log log n) 
// Space Complexity: O(n)

void sievePrime(int m,int n){
    int prime[n+1] = {0}; 
    for(int i=2;i<=n;i++){
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                prime[j] = 1;
            }
        }
    }
    cout<<"Prime numbers in the given range are :"<<endl;
    for(int i=m;i<=n+1;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int m,n;
    cout<<"Enter the range :"<<endl;
    cin>>m>>n;
    sievePrime(m,n);
    return 0;
}