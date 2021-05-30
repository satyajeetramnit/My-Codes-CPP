#include<iostream>
using namespace std;
int main(){
    // int date,poketMoney,expenditure;
    // cout<<"Enter a date : "<<endl;
    // cin>>date;
    // cout<<"Enter Poket Money : "<<endl;
    // cin>>poketMoney;
    // cout<<"Enter everyday expenditure of going out : "<<endl;
    // cin>>expenditure;
    // cout<<"\nSchedule of going out till day "<<date<<" is following :"<<endl;
    // for(int i=1;i<=date;i++){
    //     if(i%2==0){
    //         cout<<"Didn't go out on day "<<i<<endl;
    //         continue;
    //     }
    //     if(poketMoney<expenditure){
    //         cout<<"\nPoket Money khatam bhaiyaji, \nbht dukh hai jeevan me.\nAb nahi jayenge bahar #sedlyf."<<endl;
    //         break;
    //     }
    //     poketMoney = poketMoney-expenditure;
    //     cout<<"Went out on day "<<i<<"\nNow Poket Money left = "<<poketMoney<<endl;

    // }


    // int n;
    // cout<<"The number upto which you want to print is ";
    // cin>>n;
    // for (int i = 1;i<=n;i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }


    // int n,i;
    // cout<<"Enter a number : ";
    // cin>>n;
    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"Non Prime"<<endl;
    //         break;
    //     }
    // }
    // if(i==n){
    //     cout<<"Prime Number"<<endl;
    // }


    // int a,b,i,j;
    // cout<<"Enter range : ";
    // cin>>a>>b;
    // for(j=a;j<=b;j++){
    //     for(i=2;i<j;i++){
    //         if(j%i==0){
    //             break;
    //         }    
    //     }
    //     if(i==j){
    //     cout<<j<<endl;
    //     }
    // }


    int i,a,b;
    cout<<"Enter range : ";
    cin>>a>>b;
    cout<<"Even Numbesr b/w "<<a<<" & "<<b<<" are : "<<endl;
    for(i=a;i<=b;i++){
        if(i%2!=0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}