#include<iostream>
using namespace std;
int main(){
    int n,lastDigit;
    cout<<"Enter a number : ";
    cin>>n;
    int originalNumber=n;
    int revNum=0;
    while (n>0)
    {
        lastDigit=n%10;
        revNum=revNum*10+lastDigit;
        n=n/10;
    }
    if (revNum==originalNumber)
    {
        cout<<"It's a palindrome number."<<endl;
    }
    else
    {
        cout<<"Nahi hai bhidu palindrome number."<<endl;
    }
    
    
    return 0;    
}