#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "842674697464634679326741366650";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
    return 0;
}