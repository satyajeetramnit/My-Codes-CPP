#include<iostream>
using namespace std;

int binaryToDecimal(int num){
    int decimal = 0;
    int binary = 1;
    while (num>0)
    {
        int rem=num%10;
        decimal+=binary*rem;
        binary*=2;
        num/=10;
    }
    return decimal;
}

int main(){
    int n;
    cout<<"Enter number in binary : "<<endl;
    cin>>n;
    cout<<"Decimal of "<<n<<" is "<<binaryToDecimal(n)<<endl;
    return 0;
}