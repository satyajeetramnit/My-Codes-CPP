#include<iostream>
using namespace std;

int powerOf2(int n){
    return (n && !(n & (n-1)));
}
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    cout<<powerOf2(n)<<endl;
    return 0;
}