#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int count=0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            count=1;
            cout<<"Non Prime"<<endl;
            break;
        }
        
    }
    if (count==0)
    {
        cout<<"Prime hai Bhidu..."<<endl;
    }
    return 0;  
    
}