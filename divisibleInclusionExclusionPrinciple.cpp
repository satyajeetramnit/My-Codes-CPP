#include<iostream>
using namespace std;

int divisibleIncExc(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);

    return (c1+c2-c3);
}

int main(){
    int n;
    cout<<"Enter the limit :"<<endl;
    cin>>n;
    int a,b;
    cout<<"Enter the 2 factors :"<<endl;
    cin>>a>>b;
    cout<<"The count of number that are divisible by the given factors uptil given limit is "<<divisibleIncExc(n,a,b);
    return 0;
}