#include<iostream>
using namespace std;

int octalToDecimal(int num){
    int decimal = 0;
    int octal = 1;
    while (num>0)
    {
        int rem=num%10;
        decimal+=octal*rem;
        octal*=8;
        num/=10;
    }
    return decimal;
}

int main(){
    int n;
    cout<<"Enter number in octal : "<<endl;
    cin>>n;
    cout<<"Decimal of "<<n<<" is "<<octalToDecimal(n)<<endl;
    return 0;
}