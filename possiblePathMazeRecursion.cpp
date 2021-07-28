#include<iostream>
using namespace std;

// Time Complexity: O(2^n) 
// Space Complexity: O(2^n)

int countPathMaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);
}

int main(){
    int n;
    cout<<"Enter the size of the maze : "<<endl;
    cin>>n;
    cout<<"The number of possible paths through the maze is "<<countPathMaze(n,0,0)<<endl;
    int a,b;
    cout<<"Enter your position in the maze :"<<endl;
    cin>>a>>b;
    cout<<"The number of possible paths from the given position to reach the end of maze is "<<countPathMaze(n,a,b)<<endl;
    return 0;
}