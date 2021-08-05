#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<"Before Swap : "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swap : "<<a<<" "<<b<<endl;
    return 0;
}