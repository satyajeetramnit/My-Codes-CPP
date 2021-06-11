#include<iostream>
using namespace std;

int fact(int num){
    int factorial=1;
    for(int i=2;i<=num;i++){
        factorial*=i;
    }
    return factorial;
    
   // return (num==1 || num==0) ? 1: num * fact(num - 1);
}

int main(){
    int n,r;
    cout<<"Enter value of n & r : " <<endl;
    cin>>n>>r;
    int nCr;
    nCr=fact(n)/(fact(n-r)*fact(r));
    cout<<nCr<<endl;
    return 0;
}