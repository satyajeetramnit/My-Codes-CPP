#include<iostream>
using namespace std;

void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int ascii=ch;
    string restString=s.substr(1);
    substring(restString,ans);
    substring(restString,ans+ch);
    substring(restString,ans+to_string(ascii));
}

int main(){
    string s;
    cout<<"Enter a string : "<<endl;
    cin>>s;
    cout<<"All possible substrings are :"<<endl;
    substring(s,"");
    return 0;
}