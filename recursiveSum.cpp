#include<iostream>
using namespace std;

// Time Complexity: O(N) 
// Space Complexity: O(N)

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<"Sum till "<<n<<" is "<<sum(n);
    return 0;
}