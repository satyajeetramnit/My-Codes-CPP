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
    int n,i,j;
    cout<<"Enter number of rows : " <<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j));
        }
    cout<<"\n";
    }
    return 0;
}