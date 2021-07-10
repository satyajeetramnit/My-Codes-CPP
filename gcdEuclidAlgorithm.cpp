#include<iostream>
using namespace std;

//Idea : gcd(a,b) = gcd(b,a%b)

int gcdEuclid(int a,int b){
    if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<"GCD is "<<gcdEuclid(a,b);
    return 0;
}