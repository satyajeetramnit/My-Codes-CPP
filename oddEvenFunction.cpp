#include<iostream>
#include<cmath>
using namespace std;

bool oddEven(int num){
    if (num%2==0)
    {
        return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if (oddEven(n))
    {
        cout<<"Odd"<<endl;
    }
    else
    {
        cout<<"Even"<<endl;
    }
return 0;
}