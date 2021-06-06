#include<iostream>
using namespace std;
int main(){
    //Calculator

    // int a,b;
    // cout<<"Enter two numbers : ";
    // cin>>a>>b;
    // char ch;
    // cout<<"Enter the operation you want to perform : ";
    // cin>>ch;
    // switch (ch)
    // {
    // case '+':
    //     cout<<a+b<<endl;
    //     break;
    // case '-':
    //     cout<<a-b<<endl;
    //     break;
    // case '*':
    //     cout<<a*b<<endl;
    //     break;
    // case '/':
    //     cout<<a/b<<endl;
    //     break;
    
    // default:
    //     cout<<"Aukat me bhai"<<endl;
    //     break;
    // }


    //Multipersonal Greet

    // int n;
    // cout<<"1. Parents\n2. Relatives\n3. Friends\nChal ab choose kar :)"<<endl;
    // cin>>n;
    // switch (n)
    // {
    // case 1:
    //     cout<<"Pranam"<<endl;
    //     break;
    // case 2:
    //     cout<<"Namaste"<<endl;
    //     break;
    // case 3:
    //     cout<<"Abee bsdk kaisa hai..."<<endl;
    //     break;
    // default:
    // cout<<"Chal chal aage badh chutta nahi hai..."<<endl;
    //     break;
    // }


    //Vowel or Consonant

    char ch;
    cout<<"Enter an alphabet : ";
    cin>>ch;
    switch (ch)
    {
    case 'a':
        cout<<"It is a vowel."<<endl;
        break;
    case 'e':
        cout<<"It is a vowel."<<endl;
        break;
    case 'i':
        cout<<"It is a vowel."<<endl;
        break;
    case 'o':
        cout<<"It is a vowel."<<endl;
        break;
    case 'u':
        cout<<"It is a vowel."<<endl;
        break;
    default:
        cout<<"Nahi Bateyenge ki consonant hai..."<<endl;
        break;
    }
    
    return 0;
}