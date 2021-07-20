#include<iostream>
using namespace std;

// Time Complexity: O(N) 
// Space Complexity: O(N)

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<"Factorial is "<<factorial(n)<<endl;
    return 0;
}