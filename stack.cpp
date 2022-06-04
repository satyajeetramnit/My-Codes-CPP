#include<iostream>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){
        if (top==n-1){
            cout<<"Stack Overflow (Full)\n";
            return;
        }
        
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow (Empty)\n";
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No elements to print\n";
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        if(top==-1) return true;
        return false;
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<"\n";
    st.pop();
    cout<<st.Top()<<"\n";
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<"\n";
}