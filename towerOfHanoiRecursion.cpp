#include<iostream>
using namespace std;

// Time Complexity: O(2^n) 
// Space Complexity: O(1)

void towerOfHanoi(int n,char source,char destination,char helper){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,source,helper,destination);
    cout<<"Move from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1,helper,destination,source);
}

int main(){
    int n;
    cout<<"Enter the number of blocks on the source tower A : ";
    cin>>n;
    towerOfHanoi(n,'A','C','B');
    return 0;
}