#include<iostream>
using namespace std;

// Time Complexity: O(N) 
// Space Complexity: O(N)

int power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}

int main(){
    int n,p;
    cout<<"Enter the number and value of power :"<<endl;
    cin>>n>>p;
    cout<<"The value is "<<power(n,p);
    return 0;
}