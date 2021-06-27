#include<iostream>
#include<math.h>
#include<cmath>
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
    int n;
    cout<<"Enter a number : " <<endl;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}