#include<iostream>
using namespace std;

bool pythagorianTriplet(int side1,int side2,int side3){
    if (side1*side1==side2*side2+side3*side3 || side2*side2==side1*side1+side3*side3 || side3*side3==side2*side2+side1*side1)
    {
        return true;
    }
    return false;
}

int main(){
    int a,b,c;
    cout<<"Enter the length of each side of the triangle : "<<endl;
    cin>>a>>b>>c;
    if (pythagorianTriplet(a,b,c))
    {
        cout<<"Pythagorian Triplet Triangle."<<endl;
    }
    else
    {
        cout<<"Non Pythagorian triplet Triangle"<<endl;
    }
    return 0;
    
}
