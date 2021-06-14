#include<iostream>
using namespace std;

bool vote(int age){
    if (age>=18)
    {
        return true;
    }
    return false;
}

int main(){
    int yrs;
    cout<<"Enter your age in yrs : "<<endl;
    cin>>yrs;
    if (vote(yrs))
    {
        cout<<"Can Vote."<<endl;
    }
    else
    {
        cout<<"Can't Vote."<<endl;
    }
    
    return 0;
}