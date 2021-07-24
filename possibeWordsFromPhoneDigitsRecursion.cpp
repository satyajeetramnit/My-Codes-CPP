#include<iostream>
using namespace std;

string keypadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code = keypadArr[ch-'0'];
    string restString = s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(restString,ans+code[i]);
    }
}

int main(){
    string s;
    cout<<"Enter the phone digits : "<<endl;
    cin>>s;
    cout<<"All possible words are :"<<endl;
    keypad(s,"");
    return 0;
}