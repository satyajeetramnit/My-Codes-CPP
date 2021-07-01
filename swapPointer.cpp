#include <iostream>
using namespace std;

int swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=2,b=4;
    swap(&a,&b); //Call by refrence
    cout<<a<<" "<<b<<endl;
    return 0;
}