#include<iostream>
using namespace std;

// Time Complexity: O(2n) 
// Space Complexity: O(2n)

void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string restString=s.substr(1);
    substring(restString,ans);
    substring(restString,ans+ch);
}

int main(){
    string s;
    cout<<"Enter a string : "<<endl;
    cin>>s;
    cout<<"All possible substrings are :"<<endl;
    substring(s,"");
    return 0;
}