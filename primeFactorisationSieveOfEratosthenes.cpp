#include<iostream>
using namespace std;

// Preprocessing for Sieve: O(n log log n) 
// Time Complexity for factorization: O(log n) 
// Space Complexity: O(n)

void sievePrimeFactor(int n){
    int primeFactor[n+1]={0};
    for(int i=2;i<=n;i++){
        primeFactor[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(primeFactor[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(primeFactor[j]==j){
                    primeFactor[j]=i;
                }
            }
        }
    }
    cout<<"The Prime favtorisation of the given numer is :"<<endl;
    while(n!=1){
        cout<<primeFactor[n]<<" ";
        n=n/primeFactor[n];
    }
}

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    sievePrimeFactor(n);
    return 0;
}