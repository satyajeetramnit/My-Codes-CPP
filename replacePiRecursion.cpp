#include<iostream>
#include<string>
using namespace std;

// Time Complexity: O(N^2) 
// Space Complexity: O(N^2)

void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        return replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        return replacePi(s.substr(1));
    }
}

int main(){
    string s;
    cout<<"Enter a string including pi: "<<endl;
    cin>>s;
    cout<<"\nAfter replacing pi with 3.14 in the given string :"<<endl;
    replacePi(s);
    return 0;
}