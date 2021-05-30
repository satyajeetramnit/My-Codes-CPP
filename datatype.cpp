#include <iostream>
using namespace std;

int main(){
    int a; //declaration
    a=12; //initialization
    cout<<"Size of int "<< sizeof(a)<<endl;

    short int si;
    cout<<"Size of short int "<< sizeof(si)<<endl;

    long int li;
    cout<<"Size of long int "<< sizeof(li)<<endl;

    float b;
    cout<<"Size of float "<< sizeof(b)<<endl;

    char c;
    cout<<"Size of char "<< sizeof(c)<<endl;

    double d;
    cout<<"Size of double "<< sizeof(d)<<endl;

    bool e;
    cout<<"Size of boolean "<< sizeof(e)<<endl;

    wchar_t f;
    cout<<"Size of widechar "<< sizeof(f)<<endl;

    return 0;
    
}