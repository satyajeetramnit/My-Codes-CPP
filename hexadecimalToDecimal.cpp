#include<iostream>
using namespace std;

int hexadecimalToDecimal(string num){
    int decimal = 0;
    int hexadecimal = 1;
    int x=num.size();
    for (int i = x-1; i >=0 ; i--)
    {
        if (num[i]>='0' && num[i]<='9')
        {
            decimal+=hexadecimal*(num[i]-'0');
        }
        else if (num[i]>='A' && num[i]<='F')
        {
            decimal+=hexadecimal*(num[i]-'A'+10);
        }
        hexadecimal*=16;
    }
    return decimal;
}

int main(){
    string n;
    cout<<"Enter number in hexadecimal : "<<endl;
    cin>>n;
    cout<<"Decimal of "<<n<<" is "<<hexadecimalToDecimal(n)<<endl;
    return 0;
}