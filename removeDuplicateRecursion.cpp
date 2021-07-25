#include<iostream>
using namespace std;

// Time Complexity: O(N^2) 
// Space Complexity: O(N^2)

string removeDuplicate(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = removeDuplicate(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    return ch + ans;
}

int main(){
    string s;
    cout<<"Enter a string : "<<endl;
    cin>>s;
    cout<<"After removing duplicates in the given string :"<<endl;
    cout<<removeDuplicate(s)<<endl;
    return 0;
}