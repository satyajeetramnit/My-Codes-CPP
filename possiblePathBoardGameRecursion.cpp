#include<iostream>
using namespace std;

// Time Complexity: O(2^n) 
// Space Complexity: O(2^n)

int countPath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count += countPath(s+i,e);
    }
    return count;
}

int main(){
    int s,e;
    cout<<"Enter the start and end value of the board game :"<<endl;
    cin>>s>>e;
    cout<<"Number of possible path are "<<countPath(s,e)<<endl;
    return 0;
}