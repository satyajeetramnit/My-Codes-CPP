#include<iostream>
using namespace std;
int main(){
    int n,lastDigit;
    cout<<"Enter a number : ";
    cin>>n;
    int revNum=0;
    while (n>0)
    {
        lastDigit=n%10;
        revNum=revNum*10+lastDigit;
        n=n/10;
    }
    cout<<"Reversed number is "<<revNum<<endl;

    // int n; 
    // cin >> n; 
    // while (n > 0) { 
    //     int rem = n % 10; 
    //     cout << rem; 
    //     n = n / 10;
    //  }

    return 0;    
}