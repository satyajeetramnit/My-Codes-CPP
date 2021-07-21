#include<iostream>
using namespace std;

// Time Complexity: O(N) 
// Space Complexity: O(N)

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    cout<<"Enter the value n :"<<endl;
    cin>>n;
    cout<<"The nth sequence of the fibonacci series is "<<fibonacci(n)<<endl;
    return 0;
}