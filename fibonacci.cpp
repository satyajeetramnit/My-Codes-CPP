#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of fibonacci series : ";
    cin>>n;
    if (n<=0)
    {
        cout<<"Bhak Sala"<<endl;
    }
    else if (n==1)
    {
        cout<<"0";
    }
    else if (n==2)
    {
        cout<<"0\n1"<<endl;
    }
    else
    {
        int a,b,temp;
        temp=0;
        a=0;
        b=1;
        cout<<"0\n1"<<endl;
        for (int i = 2; i < n ; i++)
        {
            temp=b;
            b=a+b;
            a=temp;
            cout<<b<<"\n";
        }
    }
    return 0;    
}