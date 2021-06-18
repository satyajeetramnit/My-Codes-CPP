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

int decimalToBinary(int num){
    int decimal = 2;
    int binary = 0;

    while (num>0)
    {
        int rem=num%decimal;
        num=num/decimal;
        binary=binary*10+rem;
    }
    binary=reverse(binary);
    return binary;
}

int main(){
    int n;
    cout<<"Enter number in decimal : "<<endl;
    cin>>n;
    cout<<"Binary of "<<n<<" is "<<decimalToBinary(n)<<endl;
    return 0;
}