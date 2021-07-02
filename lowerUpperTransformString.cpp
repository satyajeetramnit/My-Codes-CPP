#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "utgddd.iyiydhkyssutlls";
    //convert to Upper Case

    // for(int i=0; i<str.size();i++){
    //     if(str[i] >= 'a' && str[i] <= 'z'){
    //         str[i] -= 32;
    //     }
    // }
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

    //Convert to Lower case

    // for(int i=0;i<str.size();i++){
    //     if(str[i] >= 'A' && str[i] <= 'Z'){
    //         str[i] +=32;
    //     }
    // }
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    return 0;
}