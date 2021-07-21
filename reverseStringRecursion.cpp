#include<iostream>
#include<string>
using namespace std;

// Time Complexity: O(N^2) 
// Space Complexity: O(N^2)

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string restString = s.substr(1);
    reverse(restString);
    cout<<s[0];
}

int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    cout<<"reverse of the given string :"<<endl;
    reverse(s);
    return 0;
}