#include<iostream>
using namespace std;

// Time Complexity: O(N*2^n) 
// Space Complexity: O(2^n)

void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string restString=s.substr(0,i)+s.substr(i+1);
        permutation(restString,ans+ch);
    }
}

int main(){
    string s;
    cout<<"Enter a sting :"<<endl;
    cin>>s;
    cout<<"All possible permutation of the given string are :"<<endl;
    permutation(s,"");
    return 0;
}