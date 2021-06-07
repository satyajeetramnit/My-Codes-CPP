#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int m=1;
    while (n>0)
    {
        m=m*n;
        n--;
    }
    cout<<"factorial "<<m<<" katega bhai."<<endl;
    return 0;    
}