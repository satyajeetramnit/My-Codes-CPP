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

int decimalToHexadecimal(int num){
    int decimal = 16;
    int hexadecimal = 0;

    while (num>0)
    {
        int rem=num%decimal;
        num=num/decimal;
        hexadecimal=hexadecimal*10+rem;
    }
    hexadecimal=reverse(hexadecimal);
    return hexadecimal;
}

int main(){
    int n;
    cout<<"Enter number in decimal : "<<endl;
    cin>>n;
    cout<<"Hexadecimal of "<<n<<" is "<<decimalToHexadecimal(n)<<endl;
    return 0;
}