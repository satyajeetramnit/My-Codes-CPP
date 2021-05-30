#include<iostream>
using namespace std;

int main(){

    // int n;
    // int sum=0;
    // cout<<"Enter a number :"<<endl;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     sum=sum+i;
    // }
    // cout<<"Sum of all natural numbers uptil n is : "<<sum<<endl;


    // int n;
    // cout<<"Enter the no. of which you want to see the table of : "<<endl;
    // cin>>n;
    // for(int i=1;i<=10;i++){
    //     cout<<n<<" multiply "<<i<<" is "<<n*i<<endl;;
    // }


    int n,sum;
    sum=0;
    cout<<"Enter a positive number to add :"<<endl;
    cin>>n;
    while(n>0){
        sum = sum+n;
        cout<<"Current Total is "<<sum<<endl;
        cout<<"Enter a positive number to add :"<<endl;
        cin>>n;
    }
    cout<<"Fuck off"<<endl;

    return 0;
}