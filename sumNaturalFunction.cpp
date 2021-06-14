#include<iostream>
using namespace std;

int sumNatural(int num){
    int sum=0;
    for (int i = 0; i <= num; i++)
    {
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<"Sum of first "<<n<<" Natural Numbers is "<<sumNatural(n)<<endl;
    return 0;
}