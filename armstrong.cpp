#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number to check for armstrong : ";
    cin>>n;
    int lastDigit;
    int armstrong=0;
    int originalNumber=n;
    while (n>0)
    {
        lastDigit=n%10;
        armstrong += lastDigit*lastDigit*lastDigit;
        n=n/10;
    }
    if (armstrong==originalNumber)
    {
        cout<<"Armstrong Number hai bhidu..."<<endl;
    
    }
    else
    {
        cout<<"Ille...Naa...Nahi...Ekdum nahi..."<<endl;
    }
    return 0;    
}