#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "tudsyudcuydfydftdutduoiipwefutggfggbdfoubyffgolqog";
    int frequency[26];
    for(int i=0;i<26;i++)
        frequency[i]=0;

    for(int i=0;i<str.size();i++){
        frequency[str[i]-'a']++;
    }

    char character='a';
    int maxFrequency=0;
    for(int i=0;i<26;i++){
        if(frequency[i]>=maxFrequency){ //without '=' sign we get first character with the maximum frequencies
            maxFrequency=frequency[i];
            character = 'a' + i;
        }     
    }
    sort(str.begin(),str.end());
    cout<<str<<endl;
    cout<<maxFrequency<<" "<<character<<endl;
    return 0;
}