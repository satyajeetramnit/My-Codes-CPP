#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the word : ";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the word : ";
    // for(int i=0;i<n;i++){
    //     cin<<arr[i];
    // }
    cin>>arr;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            cout<<"Not a palindrome word :"<<endl;
            return 0;
        }
    }
    cout<<"It's a Palindrome word."<<endl;
    return 0;
}