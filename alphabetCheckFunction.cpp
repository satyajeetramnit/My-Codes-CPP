#include<iostream>
#include<cmath>
using namespace std;

bool alphabet(char c){
    int num;
    num=int(c);
    if (num>=65 && num<=90 || num>=97 && num<=122)
    {
        return false;
    }
    return true;
}

int main(){
    char n;
    cout<<"Enter character : ";
    cin>>n;
    if (alphabet(n))
    {
        cout<<" Not an alphabet"<<endl;
    }
    else
    {
        cout<<"Alphabet"<<endl;
    }
return 0;
}