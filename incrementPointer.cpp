#include<iostream>
using namespace std;

int increment(int *a){
    return *a++;
}

int main(){
    int a=2;
    increment(&a);
    cout<<a<<endl;
    return 0;
}