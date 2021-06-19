#include<iostream>
using namespace std;

int reverse(int num){
    int lastDigit;
    int revNum=0;
    while (num>0)
    {
        lastDigit=num%10;
        revNum=revNum*10+lastDigit;
        num=num/10;
    }
     return revNum;
}

int decimalToOctal(int num){
    int decimal = 8;
    int octal = 0;

    while (num>0)
    {
        int rem=num%decimal;
        num=num/decimal;
        octal=octal*10+rem;
    }
    octal=reverse(octal);
    return octal;
}

int main(){
    int n;
    cout<<"Enter number in decimal : "<<endl;
    cin>>n;
    cout<<"octal of "<<n<<" is "<<decimalToOctal(n)<<endl;
    return 0;
}