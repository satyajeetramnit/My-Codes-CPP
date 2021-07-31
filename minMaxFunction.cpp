#include<iostream>
using namespace std;

int min(int x,int y,int z){
    return x<y?(x<z?x:z):(y<z?y:z);
}

int max(int x,int y,int z){
    return x>y?(x>z?x:z):(y>z?y:z);
}

int main(){
    int a,b,c;
    cout<<"Enter three numbers : "<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"All three given numbers are same."<<endl;
        return 0;
    }
    cout<<"Minimum of three is "<<min(a,b,c)<<endl;
    cout<<"Maximum of three is "<<max(a,b,c)<<endl;
    return 0;
}