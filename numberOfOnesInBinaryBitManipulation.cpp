#include<iostream>
using namespace std;

int numberOfOnes(int n){
    int count=0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    cout<<"Numbers of ones in the binary form of the given number is "<<numberOfOnes(n)<<endl;
    return 0;
}