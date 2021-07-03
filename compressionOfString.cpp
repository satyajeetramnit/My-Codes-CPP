//remove the repeating consecutive characters
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "sssgggshhhhhhrrruuuuddnnnnnniiiiirrrrrrrhhhhhaaaaaaaakkkkknnnnnnn";
    char compressedString[100];
    compressedString[0]=str[0];
    int n=str.size();
    int count=1;
    for(int i=1;i<n;i++){
        if(str[i] != str[i-1]){
            compressedString[count]=str[i];
            count++;
        }
    }
    cout<<compressedString<<endl;
    return 0;
}